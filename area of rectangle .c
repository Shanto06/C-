#include<stdio.h>

int main()
{
    int len,width;
    double area;

    printf("Enter len: ");
    scanf("%d",&len);

    printf("Enter width: ");
    scanf("%d",&width);

    area = (.5*len*width);

    printf("The are %.3lf\n",area);

    return 0;
}
