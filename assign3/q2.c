#include <stdio.h>
#include <stdlib.h>
void sumarr(int a[],int b[],int r[],int size){
    for (int i=0;i<size;i++){
        r[i]=a[i]+b[i];
    }
    for (int i=0;i<size;i++){
        printf("%d",r[i]);
    }

}
int main(){
    int a[3]={5,-1,7};
    int b[3]={2,4,-2};
    int r[3];
    sumarr(a,b,r,3);
    return 0;
}
