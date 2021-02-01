#include<stdio.h>
int main()
{
    int a=0,b=0;
    char c;
    while((c=getchar())!='0'&&c!=EOF)
    {
        while(c=='A')
        {    a++;
         break;}
        while(c=='B')
        {    b++;
        break;}
    }
    if(a>b)
    printf("A");
    else if(a==b) printf("E");
    else printf("B");
    return 0;
}