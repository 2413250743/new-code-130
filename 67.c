#include<stdio.h>
int main()
{
    int a,i,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0;i<a;i++)
        {
            for(j=0;j<i;j++)
                printf(" ");
            printf("*\n");
            
        }
    }
    return 0;
}