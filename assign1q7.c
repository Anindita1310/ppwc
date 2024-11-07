#include <stdio.h>
#include <stdlib.h>
int main(){
    char desiredgrade;
    float minimumavg;
    float currentavg;
    float finalweight;
    float required;
    float score;
    printf("Enter the desired grade (A, B, C, D, F):\n ");
    scanf("%c", &desiredgrade);
    printf("Enter the minimum avg:\n ");
    scanf("%f", &minimumavg);
    printf("Enter the current avg:\n ");
    scanf("%f", &currentavg);
    printf("Enter the final weight:\n ");
    scanf("%f", &finalweight);
    switch(desiredgrade){
        case 'A':
        required = 90.0;
        break;
         case 'B':
        required = 80.0;
        break;
         case 'C':
        required = 70.0;
        break;
         case 'D':
        required = 60.0;
        break;
        case 'F':
        required = 0.0;
        break;
        default:
        printf("Invalid grade\n");    
    }
    score=(minimumavg-(currentavg*(1-finalweight/100)))/(finalweight/100);
    printf("You need a score of %.2f on the final to get a %c\n",score,desiredgrade);
    return 0;
}
