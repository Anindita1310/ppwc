#include <stdio.h>

int main() {
   
    int a = 12;
    
    
    int *ptr = &a; 
    
   
    *ptr += 10; 
    
   
    printf("%d\n", *ptr); 
    return 0;
}
