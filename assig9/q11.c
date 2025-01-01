#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(){
    int pidfd[2];
    char buffer[100];
    char *message="Hello ,This is a message from pipe";
    pid_t pid;
    if(pipe(pidfd)==-1){
        perror("Pipe");
        return 1;
    }
    pid=fork();
    if(pid==-1){
        perror("Fork not created");
        return 1;
    }
    if(pid==0){
        close(pidfd[0]);
        write(pidfd[1],message,strlen(message)+1);
        
        close(pidfd[1]);
    }else{
        close(pidfd[1]);
        
        read(pidfd[0],buffer,sizeof(buffer));
        
        printf("Message read from buffer%s\n",buffer);
        
        close(pidfd[0]);
    }
    return 0;
}
