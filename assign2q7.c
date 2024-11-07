#include <stdio.h>
#include <stdlib.h>
int main(){
   int mark;
   char grade;
   printf("Enter mark of student");
   scanf("%d",&mark);
   switch(mark/10){
    case 10:
    case 9:
        if(mark>=95){
            grade='O';
        }else{
            grade='A'
        }
        break;
    case 8:
        grade='A';
        break;
    case 7:
         grade='B';
         break;
    case 6:
         grade='C';
         break;
    case 5:
         grade='D';
         break;
    case 4:
         grade='E';
         break;
    default:
         grade='F';
         break;
   }
   printf("Grade of the student is:%d\n",grade);
}
