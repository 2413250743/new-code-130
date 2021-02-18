#include<stdio.h>
int main()
{
    int a;
    int i,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=a;j++)
            {
                if(i==j||j==1||i==a)
                    printf("* ");
                else printf("  ");
            }printf("\n");
        }
    }
    return 0;
}