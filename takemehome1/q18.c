#include <stdio.h>
#define PRINT(i, limit) while(i<=limit)\
{\
printf("i=%d\n",i);\
i=i+1;\
}
int main()
{
int i=0;
PRINT(i, 6);
return 0;
}
OUTPUT:
i=0
i=1
i=2
i=3
i=4
i=5
i=6
