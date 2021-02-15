#include<stdio.h>
int main()
{
    int a,i,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=a;j++)
            {
                if(j==1||i==1||j==a||i==a)
                    printf("* ");
                else printf("  ");
                
            }
            printf("\n");
        }
    }
    return 0;
}