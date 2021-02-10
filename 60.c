#include<stdio.h>
int main()
{
    int a,b=1,c;
    int j,i;
    while(scanf("%d",&a)!=EOF)
    {
        c=a-b;
        for(i=0;i<a;i++)
        {   
            for(j=0;j<c;j++)
                printf("  ");
            for(j=0;j<b;j++)
                printf("* ");
            printf("\n");
            c--;b++;
        }b=1;
    }
    return 0;
}