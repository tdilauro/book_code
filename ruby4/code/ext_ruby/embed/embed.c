/***
 * Excerpted from "Programming Ruby 1.9 and 2.0",
 * published by The Pragmatic Bookshelf.
 * Copyrights apply to this code. It may not be used to create training material, 
 * courses, books, articles, and the like. Contact us if you are in doubt.
 * We make no guarantees that this code is fit for any purpose. 
 * Visit http://www.pragmaticprogrammer.com/titles/ruby4 for more book information.
***/
#include "ruby.h"

int main(int argc, char **argv) {
  VALUE result;

  ruby_sysinit(&argc, &argv);
  RUBY_INIT_STACK;
  ruby_init();
  ruby_init_loadpath();

  rb_require("sum");   // or sum.rb
  rb_eval_string("$summer = Summer.new");
  rb_eval_string("$result = $summer.sum(10)");
  result = rb_gv_get("result");
  printf("Result = %d\n", NUM2INT(result));
  return ruby_cleanup(0);
}
