#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF)
    {
        getchar();
        if(a>=65&&a<=90||a>=97&&a<=122)
            printf("%c is an alphabet.\n",a);
        else printf("%c is not an alphabet.\n",a);
    }
    return 0;
}