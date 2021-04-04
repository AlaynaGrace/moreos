#include "types.h"
#include "user.h"
#define NULL (0)

int main(int argc, char *argv[]){
  int * pointer = NULL;
  int value = *pointer;

  printf(1, "Null Pointer value: %p\n", *pointer);

// next section added to make "unused var" errors go away
  value = 0;
  value++;

  exit();
}