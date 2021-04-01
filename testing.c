#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void *)0)

int main(int argc, char *argv[]){
  int a, b;
  int *pi;
  a = 5;
  pi = &a;
  a = *pi;
  pi = NULL;
  b = *pi;

  printf(1, "Null Pointer value: %p\n", *pi);
  exit();
}
