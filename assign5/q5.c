int main(){
int a[][3]={4,5,6,7,8,9,1,2,3};
printf("%d,", *a[2]);
printf("%d,", a[2][0]);
printf("%d ", **(a+1+('b'-'a')));
return 0;
}//output 1,1,1
//last output statement is**(a+1+1)=**(a+2)=*(a[2])=a[2][0]=1
