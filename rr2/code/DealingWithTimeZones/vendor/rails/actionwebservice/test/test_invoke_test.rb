#---
# Excerpted from "Rails Recipes",
# published by The Pragmatic Bookshelf.
# Copyrights apply to this code. It may not be used to create training material, 
# courses, books, articles, and the like. Contact us if you are in doubt.
# We make no guarantees that this code is fit for any purpose. 
# Visit http://www.pragmaticprogrammer.com/titles/rr2 for more book information.
#---
require File.dirname(__FILE__) + '/abstract_unit'
require 'action_web_service/test_invoke'

class TestInvokeAPI < ActionWebService::API::Base
  api_method :add, :expects => [:int, :int], :returns => [:int]
end

class TestInvokeService < ActionWebService::Base
  web_service_api TestInvokeAPI

  attr :invoked

  def add(a, b)
    @invoked = true
    a + b
  end
end

class TestController < ActionController::Base
  def rescue_action(e); raise e; end
end

class TestInvokeDirectController < TestController
  web_service_api TestInvokeAPI

  attr :invoked

  def add
    @invoked = true
    @method_params[0] + @method_params[1]
  end
end

class TestInvokeDelegatedController < TestController
  web_service_dispatching_mode :delegated
  web_service :service, TestInvokeService.new
end

class TestInvokeLayeredController < TestController
  web_service_dispatching_mode :layered
  web_service(:one) { @service_one ||= TestInvokeService.new }
  web_service(:two) { @service_two ||= TestInvokeService.new }
end

class TestInvokeTest < Test::Unit::TestCase
  def setup
    @request  = ActionController::TestRequest.new
    @response = ActionController::TestResponse.new
  end

  def test_direct_add
    @controller = TestInvokeDirectController.new
    assert_equal nil, @controller.invoked
    result = invoke :add, 25, 25
    assert_equal 50, result
    assert_equal true, @controller.invoked
  end

  def test_delegated_add
    @controller = TestInvokeDelegatedController.new
    assert_equal nil, @controller.web_service_object(:service).invoked
    result = invoke_delegated :service, :add, 100, 50
    assert_equal 150, result
    assert_equal true, @controller.web_service_object(:service).invoked
  end

  def test_layered_add
    [:soap, :xmlrpc].each do |protocol|
      @protocol = protocol
      [:one, :two].each do |service|
        @controller = TestInvokeLayeredController.new
        assert_equal nil, @controller.web_service_object(service).invoked
        result = invoke_layered service, :add, 200, -50
        assert_equal 150, result
        assert_equal true, @controller.web_service_object(service).invoked
      end
    end
  end
  
  def test_layered_fail_with_wrong_number_of_arguments
    [:soap, :xmlrpc].each do |protocol|
      @protocol = protocol
      [:one, :two].each do |service|
        @controller = TestInvokeLayeredController.new
        assert_raise(ArgumentError) { invoke_layered service, :add, 1 }
      end
    end
  end

  def test_delegated_fail_with_wrong_number_of_arguments
    @controller = TestInvokeDelegatedController.new
    assert_raise(ArgumentError) { invoke_delegated :service, :add, 1 }
  end
  
  def test_direct_fail_with_wrong_number_of_arguments
    @controller = TestInvokeDirectController.new
    assert_raise(ArgumentError) { invoke :add, 1 }
  end
  
end
