#include<stdio.h>
int main()
{
    char a,b;
    while(scanf("%c",&a)!=EOF)
    {
        getchar();
        printf("%c\n",a+32);
    }
    return 0;
}