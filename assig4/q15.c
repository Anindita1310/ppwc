#include <stdio.h>

int main() {
    int a, b, c, d;
    a = 55;
    b = 105;
    c = 89;
    d = 68;

    int *ptr_a = &a;
    int *ptr_b = &b;
    int *ptr_c = &c;
    int *ptr_d = &d;

    int *max_ptr = ptr_a; 


    if (*ptr_b > *max_ptr) {
        max_ptr = ptr_b;
    }

   
    if (*ptr_c > *max_ptr) {
        max_ptr = ptr_c;
    }
    if (*ptr_d > *max_ptr) {
        max_ptr = ptr_d;
    }

    int max_value = *max_ptr;

   
    printf("The maximum value among a, b, c, and d is: %d\n", max_value);

    return 0;
}
