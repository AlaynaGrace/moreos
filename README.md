# Project 3
## Part A: Null-pointer Dereference
To do this, I made the following changes:
* In `Makefile`, I updated the starting pages for `_%` and `forktest` from 0 to 0x1000
* In `exec.c`, added a section that reserves a page of memory for NULL
* Added `testing.c`, which dereferences a null pointer and gives the following error:
```
pid 3 testing: trap 6 err 0 on cpu 0 eip 0x1008 addr 0x0--kill proc
```

## Part B: Stack Rearrangement
To do this, I made the following changes:
* Defined a variable `USERTOP` in `memlayout.h`
* Added a new function in `vm.c` that would help grow the stack
* Added a page fault case to `trap.c`
* Added limits in `syscall.c` so that the current proccess address couldn't go over `USERTOP`
* Add `topStack` to the proc struct in `proc.h`
* In `proc.c`, added logic so that the top stack for the first user process is set to 0 and all forked processes copy the process state from the proc attribute `topStack`
* In `exec.c`, added code to add two pages at the next boundary, the first one being inacessible and the second one as the user stack, and sets the proc topStack.

I was able to run the `testing.c` script again and see that it ran into a page fault error:
```
pid 3 testing: page fault on 0 eip 0x1001 stack 0x4000 sz 0x4000 addr 0x0
```
