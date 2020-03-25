#include <stdio.h>
#include <string.h>
#include<math.h>

int main()
{
    char s[100];

    int sum,i,j,n,ln;
    printf("Enter the number of testcase: ");
    scanf("%d",&n);
     printf("Enter the string: ");
    for(j=1;j<=n;j++)
    {
        scanf("%s",s);
        ///gets(s);
        ln=strlen(s);
        sum=0;
        for(i=0;i<ln;i++)
        {
            sum=sum+s[i];
        }
            printf("%d\n",sum);
    }



    return 0;
}

