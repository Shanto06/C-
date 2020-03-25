#include<stdio.h>
void main()
{
    long long int n,i,fact,j;
    printf("Enter the Number");
    scanf("%lld",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("lld%d " ,i);
    }
    getch();
}
