#include <stdio.h>
int main(){
    long number,modified;
    int digit,place=1;
    printf("Enter a number");
    scanf("%ld",&number);
    while(number>0){
        digit=number%10;

        if(digit==0){
           digit=1;
        }
        else if(digit==1){
            digit=0;
        }
        modified=digit*place+modified;
        place*=10;
        number/=10;
    }
    printf("Modified number:%ld\n",modified);
return 0;
}
       
           
