#---
# Excerpted from "Rails Recipes",
# published by The Pragmatic Bookshelf.
# Copyrights apply to this code. It may not be used to create training material, 
# courses, books, articles, and the like. Contact us if you are in doubt.
# We make no guarantees that this code is fit for any purpose. 
# Visit http://www.pragmaticprogrammer.com/titles/rr2 for more book information.
#---
require 'optparse'
require 'rails/test_help'
require 'rails/performance_test_help'
require 'active_support/testing/performance'

def options
  options = {}
  defaults = ActiveSupport::Testing::Performance::DEFAULTS

  OptionParser.new do |opt|
    opt.banner = "Usage: rails benchmarker 'Ruby.code' 'Ruby.more_code' ... [OPTS]"
    opt.on('-r', '--runs N', Numeric, 'Number of runs.', "Default: #{defaults[:runs]}") { |r| options[:runs] = r }
    opt.on('-o', '--output PATH', String, 'Directory to use when writing the results.', "Default: #{defaults[:output]}") { |o| options[:output] = o }
    opt.on('-m', '--metrics a,b,c', Array, 'Metrics to use.', "Default: #{defaults[:metrics].join(",")}") { |m| options[:metrics] = m.map(&:to_sym) }
    opt.on('-f', '--formats x,y,z', Array, 'Formats to output to.', "Default: #{defaults[:formats].join(",")}") { |m| options[:formats] = m.map(&:to_sym) }
    opt.parse!(ARGV)
  end

  options
end

class ProfilerTest < ActionDispatch::PerformanceTest
  self.profile_options = options

  ARGV.each do |expression|
    eval <<-RUBY
      def test_#{expression.parameterize('_')}
        #{expression}
      end
    RUBY
  end
end