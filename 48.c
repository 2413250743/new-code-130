#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF)
    {
        getchar();
        if('A'<=a&&a<='Z')
            printf("%c\n",a+32);
        else if('a'<=a&&a<='z')
            printf("%c\n",a-32);
    }
    return 0;
}