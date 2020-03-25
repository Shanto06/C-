#include<stdio.h>
int main()
{
    int start,end,i,j,n,mid,array[100],data;
    printf("Enter the array length: ");
    scanf("%d",&n);
    printf("Enter the %d integer value: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    start=0;
    end=n-1;
    printf("Enter the value which find: ");
    scanf("%d",&data);
    while(start<=end)
    {
        mid=((start+end)/2);

        if(data==array[mid])
        {
            printf("the number=%d and loc=%d\n",data,mid+1);
            break;
        }
        else if(data>array[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

    }

    if (start>end)
    printf("Not found! %d isn't present in the list.\n", data);

    return 0;
}
