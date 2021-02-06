#include<stdio.h>
int main()
{
    int a,i;
    i=0;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0;i<a;i++)
        {
            printf("*");
        }printf("\n");
    }
    return 0;
}