#include <stdio.h>

int main() {
    
    int values[3] = {1, 2, 3};

  
    int *ptr = values;

    printf("Original values: a = %d, b = %d, c = %d\n", ptr[0], ptr[1], ptr[2]);

    for (int i = 0; i < 3; i++) {
        ptr[i] += 10;
    }

    printf("Updated values: a = %d, b = %d, c = %d\n", ptr[0], ptr[1], ptr[2]);

    return 0;
}
