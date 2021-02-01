#include<stdio.h>
int main ()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
    if(0<=a&&a<60)
        printf("Fail\n");
    else if(60<=a&&a<=100)
        printf("Pass\n");

    }
    return 0;    
}