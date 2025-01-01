#include<stdio.h>
#include<string.h>
typedef struct{
    char name[30];
    double diameter;
    int moons;
    double or_time;
    double ro_time
}planet_t;
int main(){
    planet_t t1,*ptr;
    ptr=&t1;
    strcpy(ptr->name,"Anindita");
    ptr->diameter=45.98;
    ptr->moons=45;
    ptr->or_time=23.56;
    ptr->ro_time=45.67;
    printf("%s %.2lf %d %.2lf %.2lf\n",ptr->name,ptr->diameter,ptr->moons,ptr->or_time,ptr->ro_time);
    return 0;
}
