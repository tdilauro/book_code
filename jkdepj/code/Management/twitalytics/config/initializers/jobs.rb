#---
# Excerpted from "Deploying with JRuby",
# published by The Pragmatic Bookshelf.
# Copyrights apply to this code. It may not be used to create training material, 
# courses, books, articles, and the like. Contact us if you are in doubt.
# We make no guarantees that this code is fit for any purpose. 
# Visit http://www.pragmaticprogrammer.com/titles/jkdepj for more book information.
#---
if $servlet_context
  require 'lib/jobs/delete_old_statuses.rb'
end
