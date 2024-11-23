
#include<stdio.h>
void firstrepeat( char str[]){
    for(int i=0;i<strlen(str);i++){
        for(int j=i+1;j<strlen(str);j++){
            if(str[i]==str[j]){
            printf("First repeating character %c\n",str[i]);
             return;
            }
           
        }
    }
    printf("No repeating character found");
    
}
int main(){
    char str[100]="racecar";
    firstrepeat(str);
    return 0;
}
