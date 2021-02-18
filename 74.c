#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(0<=a&&a<=3)
            printf("Good");
        else if(4<=a&&a<=9)
            printf("Danger");
        else printf("Danger++");
    }
    return 0;
}