#include<stdio.h>
int main()
{
    int i;
    printf("The number\tsqure\tcube\n\n");
    for(i=1;i<=10;i++)
    {
        printf("\t%d\t%d\t%d\n\n",i,i*i,i*i*i);
    }

    return 0;
}
