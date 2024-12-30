#include<stdio.h>
#include<string.h>
struct sdata{
    int regdno;
    float marks;
    char name[80];
};
int main(){
    struct sdata s;
    s.regdno=56;
    s.marks=45.0;
    strcpy(s.name,"Anindita Banerjee");
    printf("Registration No%d\n",s.regdno);
    printf("Marks%.2f\n",s.marks);
    printf("Name %s\n",s.name);
    return 0;
}
