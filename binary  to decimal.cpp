#include<bits/stdc++.h>
#include<cmath>
#include<cstring>

int main()
{
    char s[1000];
    scanf("%s",s);
    int ln,i,decimal=0,n;
    ln=strlen(s);
    n=ln-1;
    for(i=0;i<ln;i++)
    {
        decimal+=(s[i]-'0')*pow(2,n);

        n--;
    }
    printf("\n");
    printf("%d\n",decimal);


    return 0;


}
