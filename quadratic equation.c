#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,D,X1,X2,X,ans;
    printf("Enter the value A B C : ");
    scanf("%lf%lf%lf",&A,&B,&C);
    ans=B*B-4*A*C;
    D=sqrt(ans);
    if(D>0)
    {
        X1=(-B+ans)/(2*A);
        X2=(-B-ans)/(2*A);
        printf("The solution X1=%.2lf\tX2=%.2lf",X1,X2);
        printf("\n");
    }
    else if(D==0)
    {
        X=(-B)/(2*A);
        printf("Unique solution X=%.2lf\n",X);
    }
    else
    {
        printf("No real value\n");
    }

    return 0;
}

