#include<stdio.h>
int main(){
    int a[10]={0,10,20,30,40,50,60,70,80,90};
    int *ptr=a;
    for(int i=0;i<10;i++){
        printf("%p\n",ptr);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d\n",ptr[i]);
    }
    
    
    
}
