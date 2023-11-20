add_library(lib3 OBJECT
  lib3.c)
# inlcude all headers in directory
target_include_directories(lib3 PUBLIC 
                              .
                              )
