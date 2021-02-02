#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF)
    {    getchar();
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
            printf("Vowel\n");
        else printf("Consonant\n");
    }
    return 0;
}