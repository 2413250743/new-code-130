#include<stdio.h>
int main()
{
    int i,j;
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0;i<a;i++)
        {
            for(j=1;j<=a;j++)
            {
                if(i+j==a)
                    printf("*");
                else printf(" ");
            }printf("\n");
        }
     
    }
    return 0;
}