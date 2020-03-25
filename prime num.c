#include<stdio.h>
int main()
{
    int num,i,check=1;

    printf("Enter the number to test: \n");
    scanf("%d",&num);

    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        check=0;
    }
    if(check==1)printf("The number is prime\n");

    else printf("The number is not prime\n");



    return 0;
}
