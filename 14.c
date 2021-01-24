#include<stdio.h>
int main()
{
    int year,month,day;
    scanf("%4d%2d%2d",&year,&month,&day);
    printf("year=%d\n",year);
    printf("month=%02d\n",month);
    printf("date=%02d\n",day);
    return 0;
}
