#include<stdio.h>
int main(){
int *p=NULL;
p=(int *)malloc(sizeof(int));
*p=10;
free(p);
int *q;
q=(int *)malloc(sizeof(int));
*q=15;
printf("%d %d\n",*p,*q);
return 0;}//output 15 15
