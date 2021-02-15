#include<stdio.h>
int main()
{
    int i,j;
    int num;
    while(scanf("%d",&num)==1)
    {
        for(i=0;i<num;i++)
        {
            for(j=0;j<i;j++)
                printf(" ");
            for(j=0;j<(num-i);j++)
                printf("* ");
            printf("\n");
        }
        
        
    }return 0;
}