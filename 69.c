#include<stdio.h>
int main()
{
    int a,j,i;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0;i<a;i++)
        {
            for(j=1;j<=a;j++)
            {
                if(i+j==a||i==(j-1))
                    printf("*");
                else printf(" ");
            }printf("\n");
        }
    }
    return 0;
}