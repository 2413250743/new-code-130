#include<stdio.h>
int main()
{
    int a[7],i,j,k,t,sum=0;
    float aver;
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    for(i=0;i<7;i++)
    {
        for(j=0;j<6;j++)
        {
            k=j+1;
            if(a[j]>a[k])
            {t=a[j];
            a[j]=a[k];
            a[k]=t;}
        }
    }
    for(i=1;i<6;i++)
    {
        sum=sum+a[i];
    }
    aver=sum/5.00;
    printf("%.2f",aver);
    return 0;
}