#include<stdio.h>
#include<string.h>
int main()
{
    ///char country[100] = {'B','A','N','G','L','A','D','E','S','H','\0'};
    ///char country[100] = "BANGLADESH";

    char ch[100];
    gets(ch);

    int i,len;


    printf("%s\n",ch);

    len = strlen(ch);

    for(i=0;i<=len;i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            ch[i]='a'+(ch[i]-'A');
        }
    }

    printf("%s\n",ch);

    return 0;
}
