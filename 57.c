#include<stdio.h>
int main ()
{
    int i,a,j;
    while(scanf("%d",&a)!=EOF)
    {for(j=0;j<a;j++)
    {
        for(i=0;i<a;i++)
            printf("* ");
        printf("\n");
    }
    }
    return 0;
}