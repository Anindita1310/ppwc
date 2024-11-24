#include <stdio.h>

#define SIZE 5 

int main() {
    int a[SIZE], b[SIZE], c[SIZE], d[SIZE], sumarray[SIZE];
    
    int *ptr_a = a;
    int *ptr_b = b;
    int *ptr_c = c;
    int *ptr_d = d;
    int *ptr_sum = sumarray;

    printf("Enter %d elements for array a:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", ptr_a + i);
    }

    printf("Enter %d elements for array b:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", ptr_b + i);
    }

    printf("Enter %d elements for array c:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", ptr_c + i);
    }

    printf("Enter %d elements for array d:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", ptr_d + i);
    }

    for (int i = 0; i < SIZE; i++) {
        *(ptr_sum + i) = *(ptr_a + i) + *(ptr_b + i) + *(ptr_c + i) + *(ptr_d + i);
    }

    printf("The sum of the arrays is:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(ptr_sum + i));
    }
    printf("\n");

    return 0;
}
     
     
     
     
     

