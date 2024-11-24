#include<stdio.h>
int main(){
    int a[6]={120,502,118,188,106,447};
    int *ptr1=&a[0];
    int *ptr2=&a[1];
    int *ptr3=&a[2];
    int *ptr4=&a[3];
    int *ptr5=&a[4];
    int *ptr6=&a[5];
    
    printf("%d\n",*ptr1);
    printf("%p\n%p",ptr1,ptr2);
}
