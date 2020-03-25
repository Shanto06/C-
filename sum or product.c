#include<stdio.h>
int main()
{
    int num1,num2,choice;
    printf("Enter num1: \n");
    scanf("%d",&num1);
    printf("Enter num2: \n");
    scanf("%d",&num2);

    printf("choice 1: sum\nchoice 2: product\n");
    scanf("%d",&choice);

    if(choice == 1) printf("the sum %d\n",num1 + num2);
    else
         printf("the product %d\n",num1 * num2);

    return 0;
}
