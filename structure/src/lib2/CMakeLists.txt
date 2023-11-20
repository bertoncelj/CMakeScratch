add_library(lib2 lib2.c)
# inlcude all headers in directory
target_include_directories(lib2 PUBLIC 
                              .
                              )
