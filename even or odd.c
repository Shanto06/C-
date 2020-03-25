#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2==0)printf("The number %d is even\n",num);


     if(num%2==1)printf("The number %d is odd\n",num);

    return 0;
}
