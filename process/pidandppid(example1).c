#include<stdio.h>
#include<unistd.h>
int main(){
    printf("I am a process%ld\n ",(long)getpid());
    printf("I am a parent process %ld\n",(long)getppid());
    return 0;
}
//Output
//I am a process 6634
//I am a parent process 6633
