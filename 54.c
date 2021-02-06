#include<stdio.h>
int main()
{
    int year;
    int month;
    while(scanf("%d %d",&year,&month)!=EOF)
    {
    if(month!=2)
    {
        switch(month)
        {
            case 1: printf("31\n");break;
            case 3:printf("31\n");break;
            case 4:printf("30\n");break;
            case 5:printf("31\n");break;
            case 6:printf("30\n");break;
            case 7:printf("31\n");break;
            case 8:printf("31\n");break;
            case 9:printf("30\n");break;
            case 10:printf("31\n");break;
            case 11:printf("30\n");break;
            case 12:printf("31\n");break;
        }
    }else if(year%4!=0)
        printf("28\n");
    else if(year%100==0&&year%400!=0)
        printf("28\n");
    else printf("29\n");}
    return 0;
}