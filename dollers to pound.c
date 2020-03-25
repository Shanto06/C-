#include<stdio.h>

int dol_pon(int dol);
int main()
{
    int num,dol;

    printf("Enter a doller: ");
    scanf("%d",&num);
    dol = dol_pon(num);
     printf("%d pound\n",dol);

    return 0;
}

int dol_pon(int dol)
{
    int pon;
    pon  = dol/2;

    return pon;
}

