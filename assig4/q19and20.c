#include <stdio.h>
void sum_n_avg(double num1, double num2, double num3, double *sum, double *avg);


void sum_n_avg(double num1, double num2, double num3, double *sum, double *avg) {
    *sum = num1 + num2 + num3; 
    *avg = *sum / 3;           
}

int main() {
    double a, b, c; 
    double total, average; 

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);


    sum_n_avg(a, b, c, &total, &average);

   
    printf("Sum: %.2lf\n", total);
    printf("Average: %.2lf\n", average);

    return 0;
}
     


