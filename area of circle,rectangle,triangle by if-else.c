#include<stdio.h>
int main()
{
    double h,w,l,area,r,PI=3.1416;
    char ch;

    printf("Do you want to:\n");
    printf("Area of Circle ,Triangle or Rectangle?\n");
    printf("Enter first letter: \n");
    ch = getchar();

    if(ch=='C')
    {
        printf("Enter radius: \n");
        scanf("%lf",&r);
        printf("Area of circle %lf\n",(PI*r*r));
    }

    else if(ch=='T')
       {
            printf("Enter width: \n");
        scanf("%lf",&w);

        printf("Enter hight: \n");
        scanf("%lf",&h);
        printf("Area of triangle %lf\n",(.5*w*h));
       }
    else if(ch=='R')
        {
            printf("Enter length: \n");
        scanf("%lf",&l);

        printf("Enter hight: \n");
        scanf("%lf",&h);
        printf("Area of rectangle %lf\n",h*l);
        }


    return 0;
}
