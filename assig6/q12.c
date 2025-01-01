#include<stdio.h>
int printfibo(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return printfibo(n-1)+printfibo(n-2);
    }
}
int main(){
    int n=5;
    for(int i=0;i<=n;i++){
        printf("%d",printfibo(i));
    }
    return 0;
}
