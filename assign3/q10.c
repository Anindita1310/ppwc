
#include <stdio.h>
void binarytohexa(long binaryval){
    long hexadecimal=0,i=1,rema;
    while(binaryval!=0){
        rema=binaryval%10;
        hexadecimal=hexadecimal+rema*i;
        i=i*2;
        binaryval=binaryval/10;
        
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimal);

    
}

int main()
{ 
    long binaryval;
    printf("eNTER A NUMBER\n");
    scanf("%ld",&binaryval);
    binarytohexa(binaryval);
    
}
