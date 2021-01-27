#include<stdio.h>
#define pai 3.1415926
int main()
{
    float a;
    double V;
    scanf("%f",&a);
    V=4*pai*a*a*a/3;
    printf("%.3lf",V);
    return 0;
}