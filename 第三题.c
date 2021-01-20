#include<stdio.h>
int main()
{
    short a;
    int b;
    long c;
    long long d;
    printf("The size of short is %d bytes.\nThe size of int is %d bytes.\nThe size of long is %d bytes.\nThe size of long long is %d bytes.\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}