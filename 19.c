#include<stdio.h>
int main()
{
    int a,b,n,c=0,i=1000;
    scanf("%d",&a);
    for(n=0;n<4;n++)
    {
        b=a%10;
        a=a/10;
        c=c+b*i;
        i=i/10;
    }
    printf("%04d",c);
    return 0;
}