#include<stdio.h>
int main()
{
    int f=10000;
    int a1,a2,a3,a4,a5,a6,a7,a8;

    for(;f<=99999;f++)
    {
        a1=f/10000,a2=f%10000;
        a3=f/1000,a4=f%1000;
        a5=f/100,a6=f%100;
        a7=f/10,a8=f%10;
    if(f==a1*a2+a3*a4+a5*a6+a7*a8)
        printf("%d ",f);
        else continue;
    }
    return 0;
}