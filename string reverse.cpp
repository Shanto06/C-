#include<bits/stdc++.h>
#include<cstring>
using namespace std;

void str_rev(char *s);
void str_rev(char *in,char *out);

int main()
{
    char s1[80],s2[80];
    strcpy(s1,"this is a test");

    str_rev(s1,s2);
    cout<<s2<<endl;

    str_rev(s1);
    cout<<s1<<endl;

    return 0;
}

/// reverse string ,put result in s
void str_rev(char *s)
{
    char temp[80];
    int i,j;
    for(i=strlen(s)-1,j=0;i>=0;i--,j++)
        temp[j]=s[i];
    temp[j]='\0'; /// null -terminate result
    strcpy(s,temp);
}
/// reverse string ,put result into out
void str_rev(char *in,char *out)
{
    int i,j;
    for(i=strlen(in)-1,j=0;i>=0;i--,j++)
        out[j]=in[i];
    out[j]='\0'; /// null-terminate result
}
