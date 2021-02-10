#include<stdio.h>
int main()
{
    int a,b=1;
    int i,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
                printf("* ");
            b++;
            printf("\n");
        }b=1;
    }
    return 0;
}