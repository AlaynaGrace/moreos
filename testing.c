#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void *)0)

int main(int argc, char *argv[]) {
  int a, b;
  int *p;
  a = 5;
  p = &a;
  a = *p;
  p = NULL;
  b = *p;

  printf(1, "Null Pointer value: %p\n", *p);
  exit();
}
