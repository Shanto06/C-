#include<stdio.h>
int main()
{
    int num[100],i,key,loc=0,n;
    printf("How many number do you want to input?\n");
    scanf("%d",&n);
    printf("Enter %d integer number:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
        printf("Enter a number to find:\n");
        scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==num[i])
        {
            printf("The number %d is found at %d position.\n",key,i+1);
            loc=1;
        }
    }
        if(loc!=1)
        {
            printf("The number %d is not found.\n",key);
        }
    return 0;
}
