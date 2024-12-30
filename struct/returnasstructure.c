#include <stdio.h>
#include <string.h>  

struct person {
    char name[50];
    int age;
};

struct person persondetails(){
    struct person p1;
    p1.age=34;
    strcpy(p1.name,"Anindita");
    return p1;
}
int main(){
    struct person p2=persondetails();
    printf("%s\n",p2.name);
    printf("%d\n",p2.age);
    return 0;
}
