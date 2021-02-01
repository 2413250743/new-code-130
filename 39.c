#include<stdio.h>
int main()
{
    int a,i,j;
    int b[40],t;
    scanf("%d",&a);
    for(i=0;i<a;i++)
        scanf("%d",&b[i]);
    for(int k=0;k<6;k++)
    {
    for(i=0;i<(a-1);i++)
    {
        j=i+1;
        if(b[i]>b[j])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
    }
    }
    for(i=a-1;i>=(a-5);i--)
        printf("%d ",b[i]);
}