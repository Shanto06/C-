#include<stdio.h>
int main()
{
    int len,width,height,volume;

    printf("Enter len: ");
    scanf("%d",&len);

    printf("Enter width: ");
    scanf("%d",&width);

    printf("Enter height: ");
    scanf("%d",&height);

    volume = len*width*height;

    printf("The volume of %d\n",volume);

    return 0;


}
