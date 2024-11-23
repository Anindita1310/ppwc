#include <stdio.h>

int main() {
    
    int x = 42;

   
    int *p1 = &x; 
    int *p2 = NULL; 
    int *p3 = &x; 
   
    printf("Value of x from p1: %d\n", *p1);

   
    *p3 = 100;

   
    printf("Updated value of x from p1: %d\n", *p1);

    return 0;
}
