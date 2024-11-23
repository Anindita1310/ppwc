#include <stdio.h>

void bubblesort(int *arr, int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[5] = {1, 4, 7, 9, 5};
    int n = 5; // Define the size of the array
    bubblesort(arr, n); // Pass the array and its size to the function

    for(int j = 0; j < n; j++) { // Print the sorted array
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0; // Return 0 to indicate successful execution
}
