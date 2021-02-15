#include<stdio.h>
int main()
{
    int j,i,a;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0;i<=a;i++)
        {for(j=0;j<=a-i;j++)
                printf("* ");
            printf("\n");}
        for(i=1;i<=a;i++)
        {
            for(j=0;j<=i;j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}