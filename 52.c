#include<stdio.h>
int main()
{
    float kg,cm;
    float BMI;
    while(scanf("%f %f",&kg,&cm)!=EOF)
    {
        BMI=kg/(cm*cm)*10000;
        if(BMI<18.5)
            printf("Underweight\n");
        else if(BMI<=23.9)
            printf("Normal\n");
        else if(BMI<=27.9)
            printf("Overweight\n");
        else printf("Obese\n");
    }
    return 0;
}