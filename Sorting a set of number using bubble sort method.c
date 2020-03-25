#include<stdio.h>
int main()
{
    int i,j,n,array[100],temp;
    printf("Enter the array length: ");
    scanf("%d",&n);
    printf("Enter the %d integer value: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]= array[j+1];
                array[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }


    return 0;
}
