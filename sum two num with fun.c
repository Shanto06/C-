#include<stdio.h>

void sum(int x,int y);

int main()
{
    sum(10-2,9*7);
    sum(432,87);
    sum(12,9);

    return 0;
}

void sum(int x,int y)
{
    printf("%d\n",x+y);
}
