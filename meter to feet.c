#include<stdio.h>
int main()
{
    int choice;
    double num;
    printf("Enter a number: ");
    scanf("%lf",&num);
    printf("1: meters to Feet, 2: Feet to Meters: \n");
    scanf("%d",&choice);

    if(choice == 1)printf("%lf",num/3.28);
    if(choice == 2)printf("%lf",num*3.28);

    return 0;
}
