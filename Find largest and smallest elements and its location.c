#include<stdio.h>
int main()
{
    int MAX,SMALL,i,n,loc1=1,loc2=1,array[100];
    printf("Enter array length: ");
    scanf("%d",&n);
    printf("Enter %d integer value: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    MAX=array[0],SMALL=array[0];

     for(i=0;i<n;i++)
    {
       if(MAX<array[i])
       {
           MAX=array[i];
           loc1=i+1;
       }

       if(SMALL>array[i])
       {
           SMALL=array[i];
           loc2=i+1;
       }
    }
    printf("the max number %d and location %d\n",MAX,loc1);
     printf("the small number %d and location %d\n",SMALL,loc2);



    return 0;
}
