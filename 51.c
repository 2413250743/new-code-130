#include<stdio.h>
int main()
{
    float a,b,c;
    while(scanf("%f %f %f",&a,&b,&c)!=EOF)
    {
        if((a+b)>c&&(a+c)>b&&(b+c)>a)
            if(a==b&&b==c)
                printf("Equilateral triangle!\n");
            else if(a==b&&a!=c||a==c&&a!=b||b==c&&b!=a)
                printf("Isosceles triangle!\n");
            else printf("Ordinary triangle!\n");
        else printf("Not a triangle!\n");
    }
    return 0;
}