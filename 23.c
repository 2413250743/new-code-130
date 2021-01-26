#include<stdio.h>
int main()
{
    int second;
    int h,min,s;
    scanf("%d",&second);
    h=second/3600;

    min=second%3600/60;
    s=second%3600%60;
printf("%d %d %d",h,min,s);
    return 0;
}