#include "Lijst.hpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE( "operator<<" ){
   std::stringstream s;
   my_array< int, 10 > array;
   array.add(2);
   array.add(3);

   s << array;
   
   REQUIRE( s.str() == "{2,3}" );   
}

TEST_CASE( "add" ){
   std::stringstream s;
   my_array< int, 10 > array;
   array.add(4);
   array.add(2);
   array.add(6);

   s << array;

   REQUIRE( s.str() == "{4,2,6}" );   
}

TEST_CASE( "remove" ){
   std::stringstream s;
   my_array< int, 10 > array;
   array.add(1);
   array.add(2);
   array.add(3);

   array.remove(1);
   array.remove(15);

   s << array;
   
   REQUIRE( s.str() == "{2,3}" ); 
}

TEST_CASE( "contains" ){
   my_array< int, 10 > array;
   array.add(4);
   array.add(3);
   array.add(6);

   REQUIRE( array.contains(4) == true );  
}

TEST_CASE( "max" ){
   my_array< int, 10 > array;
   array.add(1);
   array.add(3);
   array.add(666);
   array.add(2);

   REQUIRE( array.max() == 666 );  
}

