#include<stdio.h>
int main()
{
    int month,day,delt;
    float price,a;
    scanf("%f %d %d %d",&price,&month,&day,&delt);

    if(month==11&&day==11)
    {if(delt==1)
     if ((a=(price*0.7-50))>=0)
        printf("%.2f\n",a);
        else printf("0.00\n");
    else if((a=price*0.7)>=0)
        printf("%.2f\n",a);
        else printf("0.00");}
    else if(month==12&&day==12)
    {if(delt==1)
     if ((a=(price*0.8-50))>=0)
        printf("%.2f\n",a);
        else printf("0.00\n");
    else if((a=price*0.8)>=0)
        printf("%.2f\n",a);
        else printf("0.00");}
    else
        printf("%.2f",price);
    return 0;}