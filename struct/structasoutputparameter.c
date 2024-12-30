#include <stdio.h>
#include <string.h>  

struct person {
    char name[50];
    int age;
};


void getPersonDetails(struct person *p) {
    strcpy(p->name, "John Doe"); 
    p->age = 30; 
}

int main() {
    struct person p1;  
    getPersonDetails(&p1);
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return 0;
}
