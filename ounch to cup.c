#include<stdio.h>

int o_to_c(int x);

int main()
{
    int ounch,cup;
    printf("Enter a ounch: ");
    scanf("%d",&ounch);

    cup = o_to_c(ounch);
    printf("The cup %d\n",cup);

    return 0;
}

int o_to_c(int ounch)
{
    int cup;
    cup = ounch/8;
    return cup;
}
