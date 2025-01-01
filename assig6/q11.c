#include<stdio.h>
int sumarray(int arr[],int n);
int sumarray(int arr[],int n){
    if(n<=0)
        return  0;
    else{
        return arr[n-1]+sumarray(arr,n-1);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=sumarray(arr,n);
    printf("%d\n",result);
    return 0;

}
