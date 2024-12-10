#include <stdio.h>
#define MAX(x) #x
int main(){
printf(MAX(ITER));
return 0;
}
The line:
printf(MAX(ITER)); expanded to
printf("ITER");
//Output
//this gives error
