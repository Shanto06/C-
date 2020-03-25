#include<stdio.h>
int main()
{
    int a,b;
    char ch;


    printf("Do you want to:\n");

    printf("Add,subtract,Multiply or divide?\n");

    printf("Enter first letter: ");
    ch=getchar();
    printf("\n");

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    if(ch=='A')
        printf("%d\n",a+b);

    if(ch=='S')
        printf("%d\n",a-b);

    if(ch=='M')
        printf("%d\n",a*b);

    if(ch=='D')
        printf("%d\n",a/b);


    return 0;
}
