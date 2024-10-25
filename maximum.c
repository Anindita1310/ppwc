#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,max;
  printf("How many numbers you want to enter\n");
  scanf("%d",&n);
  int *arr;
  arr=(int*)malloc(n*sizeof(int));
  for (i=0;i<n;i++){
   scanf("%d",arr+i);
  }

  max=arr;
  ptr=arr;
  for(i=0;i<n;i++){
       if(*max<*ptr){
          max=ptr;
       }
      ptr++;
  }
   print("Largest value is:%d\n",*max);
   return 0;
}
