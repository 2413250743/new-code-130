#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF)
    {   getchar(); 
        if(65<=a&&a<=90||97<=a&&a<=122)
            printf("YES\n");
        else printf("NO\n");
    }return 0;
}