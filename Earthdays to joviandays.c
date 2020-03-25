/* This program converts Earth days into jovian years*/

#include<stdio.h>
int main()
{
   float e_days;   /*number of Earth days*/

    float j_years;  /*equivalent number of jovian years*/

    /* get number of Earth days*/

    printf("Enter number of Earth days: ");
    scanf("%f",&e_days);

    /* now compute jovian years*/

    j_years = e_days/(365*12);

    /*display the answer*/
    printf("equivalent jovian years: %f\n",j_years);




    return 0;
}
