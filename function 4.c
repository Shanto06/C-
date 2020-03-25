#include<stdio.h>
int f1(void);

int main()
{
    double ans;
    ans = f1();

    printf("%lf",ans);

    return 0;
}

int f1(void)
{
    return 100;
}
