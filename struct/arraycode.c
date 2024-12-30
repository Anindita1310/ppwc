
#include<stdio.h>
struct sdata{
    int regdno;
    float marks;
    char name[80];
};
struct sdata s[]={
    {34,45.0,"Anindita"},
    {26,78.0,"Shweta"},
    {11,93.0,"Rohan"}
};
int main(){
    int num=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<num;i++){
        printf("Student %d:\n", i + 1);
        printf("Registration Number: %d\n", s[i].regdno);
        printf("Marks: %.2f\n", s[i].marks);
        printf("Name: %s\n\n", s[i].name);
    }
    return 0;
}
