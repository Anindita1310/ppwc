#include<stdio.h>
#include<string.h>
struct sdata{
    char name[50];
    int age;
};
void printdetails(struct sdata d1){
    d1.age=d1.age+1;
    printf("Name:%s\n",d1.name);
    printf("Age:%d\n",d1.age);
}
int main(){
    struct sdata d={"Alice",56};
    printdetails(d);
    return 0;
}
