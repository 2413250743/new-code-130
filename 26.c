#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,p;
    float circum,area;
    scanf("%f%f%f",&a,&b,&c);
    circum=a+b+c;
    p=circum/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("circumference=%.2f area=%.2f",circum,area);
              return 0;
}