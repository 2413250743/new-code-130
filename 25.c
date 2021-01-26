#include<stdio.h>
int main()
{
    float kg,cm;
    float BMI;
    scanf("%f %f",&kg,&cm);
    cm=cm/100;
    BMI=kg/(cm*cm);
    printf("%.2f",BMI);
    return 0;
}