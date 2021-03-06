#---
# Excerpted from "Pragmatic Scala",
# published by The Pragmatic Bookshelf.
# Copyrights apply to this code. It may not be used to create training material, 
# courses, books, articles, and the like. Contact us if you are in doubt.
# We make no guarantees that this code is fit for any purpose. 
# Visit http://www.pragmaticprogrammer.com/titles/vsscala2 for more book information.
#---
mkdir -p classes
scalac -d classes Car.scala
javac -d classes -classpath $SCALA_HOME/lib/scala-library.jar:classes \
  UseCar.java
java -classpath $SCALA_HOME/lib/scala-library.jar:classes \
  automobiles.users.UseCar
