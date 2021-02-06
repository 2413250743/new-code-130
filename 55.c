#include<stdio.h>
int main()
{
    double a,b;
    char c;
    while(scanf("%lf%c%lf",&a,&c,&b)!=EOF)
    {
      
        if(c=='+')
            printf("%.4lf+%.4lf=%.4lf\n",a,b,a+b);
        else if(c=='-')
            printf("%.4lf-%.4lf=%.4lf\n",a,b,a-b);
        else if(c=='*')
            printf("%.4lf*%.4lf=%.4lf\n",a,b,a*b);
        else if(c=='/')
            if(b==0)
                printf("Wrong!Division by zero!\n");
        else printf("%.4lf/%.4lf=%.4lf\n",a,b,a/b);
        else printf("Invalid operation!\n");
    }
    return 0;
}