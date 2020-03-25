#include<stdio.h>

int main()
{
    char ch;
    printf("the ascii value A to Z\n");
     printf("\n\n");


    for(ch='A';ch<='Z';ch++)
    {
        printf("the ascii value %d %c\n",ch,ch);
    }
    printf("\n\n");

    printf("the ascii value a to z\n");
     printf("\n\n");


    for(ch='a';ch<='z';ch++)
    {
        printf("the ascii value %d %c\n",ch,ch);
    }


    return 0;}
