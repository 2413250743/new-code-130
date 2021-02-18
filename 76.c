#include<stdio.h>
int main()
{
    int a,i,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=i;j++)
            {
                
                    printf("%d ",j);
                
            }printf("\n");
        }
    }
    return 0;
}