#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
void generatefibonacci(int n){
    int a,b,next;
    a=0,b=1;
    for(int i=0;i<n;i++){
        if(i==0){
            printf("%d",a);
        }if(i==1){
            printf("%d",b);
        }
        next=a+b;
        a=b;
        b=next;
        printf("%d",next);
        
    }
    
}
int main(int argc,char*argv[]){
    if(argc!=2){
        fprintf(stderr,"Usage%d",argv[0]);
    }
    int n=atoi(argv[1]);
    if(n<0){
        fprintf(stderr,"Please enter a positive number");
    }
    pid_t pid;
    pid=fork();
    if(pid<0){
        perror("Fork failed");
        return 1;
    }else{
        generatefibonacci(n);
        exit(0);
    }else{
        wait(NULL);
        return 0;
    }
    return 0;
}
