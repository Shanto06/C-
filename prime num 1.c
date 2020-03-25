
#include<stdio.h>
int main()
{
    int i,j,a,ck,num,count=0;
    printf("Enter your number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        a=i;
        ck=1;
        if(a==1)
         {
             ck=0;
         }
         else
        {

            for(j=2;j<=a/2;j++)
            {
                if(a%j==0)
                {
                   ck=0;
                }
            }
            if(ck==1)
            {
                printf("The prime number is %d\n",a);
                count=count+1;
            }
        }

    }

    printf("The count number %d\n",count);

    return 0;

}




