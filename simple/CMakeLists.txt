cmake_minimum_required(VERSION 3.25.0)

project(Hello)
add_executable(Hello main.c)

include(TestBigEndian)
include(CMakeFindFrameworks)
Test_BIG_ENDIAN(IS_BIG_ENDIAN)
if(IS_BIG_ENDIAN)
  message("Big endian")
else()
  message("Little endian")
endif()

find_package (Python3 COMPONENTS Interpreter Development)


set (ENV{ANA} "ANAAANAAA!!!")

set(name_var "Hello")

set(NEKI TRUE) 


message( SEND_ERROR "Send error message!" )
message( WARNING "Hello warrning!")
message(AUTHOR_WARNING "author warrning!")
message( NOTICE "notice message!")
message( STATUS "status message!")
message( VERBOSE "verbose message!")
message( DEBUG "debugg message!")
message( TRACE "trace message!")




function(Foo)
  list(APPEND CMAKE_MESSAGE_CONTEXT "foooooo")
  message("Foo message")
endfunction()

list(APPEND CMAKE_MESSAGE_CONTEXT "top")
message("Before foo")
foo()
message("After foo")



