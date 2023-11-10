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
