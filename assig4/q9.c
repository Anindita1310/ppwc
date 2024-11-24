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
    
    float a1[6]={10.2,13.3,20.0,33.3,45.3,89.9};
    float *ptr1=a1;
    for(int i=0;i<6;i++){
        printf("%p\n",ptr1);
    }
    printf("\n");
    for(int i=0;i<6;i++){
        printf("%f\n",ptr1[i]);
    }
    
    
    
    
}
