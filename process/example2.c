#include <stdio.h>
#include <unistd.h>
int main(void) {
  int x;
  x = 0;
  fork();//a child process is created and the parent process continues executing
  x = 1;
  printf("I am a process %ld and my x is %d\n",(long)getpid(),x);
  return 0;
}
//Output
//I am a process 6483 and my x is 1
// I am a process 6487 and my x is 1
