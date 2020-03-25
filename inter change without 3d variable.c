#include<stdio.h>
int main()
{
    int a,b;
    a = 5;
    b = 7;
    printf("before the change %d %d\n",a,b);

    b = a - b;
    a = a - b;
    b = a + b;
    printf("after the change %d %d\b",a,b);

    return 0;
}
