#include<stdio.h>
int main()
{
    int i,len;
    char str;
    str = "bangladesh is my country";

    for(i=0;i<='\0';i++)
    {
        len =len + i;
    }
    printf("%d\n",len);

    return 0;
}
