#include<stdio.h>


int main()
{
    func2();

    return 0;
}

void func1(void)
{
    printf("The summer soldier,");
}

void func2(void)
{
    func1();
    printf("the sunshine patriot\n");
}
