#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void *)0)

int main(int argc, char *argv[]){
  int * pointer = NULL;
  int value = *pointer; /* Dereferencing happens here */

  printf(1, "Null Pointer value: %p\n", *pointer);
  exit();
}
