#include <stdio.h>

int binarysearch(int arr[], int l, int right, int x) {
    while (l <= right) {
        int mid = (l + right) / 2; 
        if (arr[mid] == x) {
            return mid; 
        } else if (arr[mid] > x) {
            right = mid - 1; 
        } else {
            l = mid + 1; 
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 4, 6, 7, 8, 9, 11}; 
    int x = 9;
    int n =7; 
    int r = binarysearch(arr, 0, n - 1, x); 

    if (r == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", r);
    }

    return 0;
}
