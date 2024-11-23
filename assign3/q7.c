#include <stdio.h>
#include <stdlib.h>

void distinct(int a[], int n) {
    int arr1[n];
    int arr1Size = 0;  
    for (int i = 0; i < n; i++) {
        int found = 0; 
        
      
        for (int j = 0; j < arr1Size; j++) {
            if (a[i] == arr1[j]) {
                found = 1; 
                break;
            }
        }

        
        if (!found) {
            arr1[arr1Size] = a[i];
            arr1Size++;  
        }
    }

    
    for (int i = 0; i < arr1Size; i++) {
        printf("%2d ", arr1[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 8, 8, 5};
    int asize = sizeof(a) / sizeof(a[0]); 

    distinct(a, asize);
    
    return 0;
}
