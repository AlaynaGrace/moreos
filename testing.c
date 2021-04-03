#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void *)0)

int main(int argc, char *argv[]){
    // char *path =NULL;
	// mkdir(path);//Should not cause segfault
	// exit();
  int * pointer = NULL;
  int value = *pointer; /* Dereferencing happens here */

  printf(1, "Null Pointer value: %p\n", *pointer);

  value = 5;
  printf(1, "printing value: %d\n", value);
  exit();
}
