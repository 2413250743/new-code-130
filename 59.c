#include<stdio.h>
int main()
{
    int a,b;
    int j,i;
    while(scanf("%d",&a)!=EOF)
    {
        b=a;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
                printf("* ");
            b--;
            printf("\n");
        }
    }return 0;
}