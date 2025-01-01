#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main(){
    int pidfd[2];
    char buffer[100];
    char *message="Hello!This is a message from pipe";
    write(pidfd[1],message,strlen(message)+1);
    read(pidfd[0],buffer,sizeof(buffer));
    
    printf("Message read from pipe%s\n",buffer);
    close(pidfd[0]);
    close(pidfd[1]);
    return 0;
}
