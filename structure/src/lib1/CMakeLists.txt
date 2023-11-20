add_library(lib1 lib1.c)
# inlcude all headers in directory
target_include_directories(lib1 PUBLIC 
                              .
                              )
