#include <stdio.h>
#include <stdlib.h>
int main(){
    float speedkm_h;
    float distance_m;
    printf("Enter speed in km/h:\n ");
    scanf("%f",&speedkm_h);
    printf("Enter distance in m:\n ");
    scanf("%f",&distance_m);
    float speedm_s= speedkm_h*(1000.0/3600.0);
    float t=(2*distance_m/speedkm_h);
    float acc=speedkm_h/t;
    printf("The acceleration of the jet is %.2f m/s²\n", acc);
    printf("The time to reach takeoff speed is %.2f seconds\n", t);
    return 0;
}
