#include <stdio.h>

int main() {
    
    float arr[3] = {6.7, 1.2, 2.3};


    float *p = arr;

    
    printf("Value at p[0]: %.2f\n", p[0]); 
    printf("Value at p[1]: %.2f\n", p[1]); 
    printf("Value at p[2]: %.2f\n", p[2]); 
    return 0;
}
