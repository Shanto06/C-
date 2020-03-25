
#include<stdio.h>
int main()
{
    int i,j,a,ck,num1,count=0,temp,num2;
    printf("Enter your number: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        temp=num1;
       num1=num2;
       num2=temp;

    }

    for(i=num1;i<num2;i++)
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
                ck=0;
            }
            if(ck==1 && a%17==0)
            {
                printf("The prime number is %d\n",a);
                count=count+1;
            }
        }

    }

    printf("The count number %d\n",count);

    return 0;

}




