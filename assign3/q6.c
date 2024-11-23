#include <stdio.h>
#include <stdlib.h>
int isPresent(int p[],int size,int element){
    int i;
    for(i=0;i<size;i++){
        if(p[i]==element){
            return 1;
        }
    }
    return 0;
}
void  difference(int a[],int b[],int asize,int bsize){
    for(int i=0;i<asize;i++){
         if(!isPresent(b,bsize,a[i])){
            printf("%2d ",a[i]);
        }
    }
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {2, 4, 6, 8, 10};
    int asize=5;
    int bsize=5;
    difference(a,b,asize,bsize);
    return 0;
}






