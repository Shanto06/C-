#include<stdio.h>
#include<math.h>
#include<conio.h>
int array[100],order;
double fun(double x)
{
    double sum=0;
    int i;
    for(i=order;i>=0;i--)
      {
          sum+=array[i]*pow(x,i);
      }
    return sum;
}


int main()
{
    char op;
    int j;

    printf("Enter the variable name: ");
    scanf("%c",&op);
    printf("\nEnter the polynomial order: ");
    scanf("%d",&order);
    printf("\nEnter co-efficient polynomial: \n");
    for(j=order ;j>=0;j--)
    {
        printf("\nEnter the co-efficient of a[%d]:-\t",j);
        scanf("%d",&array[j]);
    }
    printf("\nthe polynomial equation is : ");
    for(j=order;j>0;j--)
    {
        if(array[j]!=0)
        {
            printf("%d",array[j]);
            printf("%c^",op);
            printf("%d+",j);
        }
    }
      printf("%d\n",array[j]);

      double value;
      printf("\nEnter the value of %c: ",op);
      scanf("%lf",&value);
      printf("\nEvaluation the polynomial equation for %c = %d is : \n",op,value);

      printf("%lf\n",fun(value));



    return 0;
}
