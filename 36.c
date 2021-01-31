#include<stdio.h>
int main()
{
    float kg,m,s;
    scanf("%f %f",&kg,&m);
    s=kg/(m*m);
    if(18.5<=s&&s<=23.9)
        printf("Normal\n");
    else printf("Abnormal");
    return 0;
}