#include<stdio.h>
int main()
{
    int i,j,x;
    int a,b=1,c;
    while(scanf("%d",&a)!=EOF)
    {c=a-b;
     for(x=0;x<a;x++)
     {
        for(i=0;i<c;i++)
            printf(" ");
     for(j=0;j<b;j++)
         printf("* ");
     printf("\n");
     b++;c--;
    }b=1;
    }return 0;
}