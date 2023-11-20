#include <stdio.h>

#include "lib1.h"
#include "lib2.h"
#include "lib3.h"

int main(void) {
  printf("app1.c \n");
  foo_lib1();
  foo_lib2();
  foo_lib3();
  return 0;
}
