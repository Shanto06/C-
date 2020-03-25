#include<stdio.h>
int main()
{
    int a,b;
    char ch;

    printf("Do you want to:\n");
    printf("Add,Subtract,Multiply,Divide?\n");
    printf("ENTER FIRST LETTER: \n");
    ch = getchar();
    printf("\n");

    printf("Enter first number: \n");
    scanf("%d",&a);

    printf("Enter second number: \n");
    scanf("%d",&b);

    if(ch=='A')
        printf("Add %d\n",a+b);
    else if(ch=='S')
        printf("Subtract %d\n",a-b);
    else if(ch=='M')
        printf("Multiply %d\n",a*b);
    else if(ch=='D' && b!=0)
        printf("Divide %d\n",a/b);


    return 0;
}
