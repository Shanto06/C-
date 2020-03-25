#include<stdio.h>

void func1(void);

int main()
{
    func1();
    return 0;
}

void func1(void)
{
    printf("This is printed\n");
    //return;
    printf("This is never printed\n");
}
