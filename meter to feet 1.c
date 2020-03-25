#include<stdio.h>
int main()
{
    int num,choice;
    printf("choice 1: Meters to Feet\nchoice 2: Feet to Meters\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("Enter number of Meters: ");
        scanf("%d",&num);
        printf("Feet: %lf\n",num*3.28);
    }

    else
    {
        printf("Enter number of Feet: ");
        scanf("%d",&num);
        printf("Meters: %lf\n",num/3.28);
    }


    return 0;
}
