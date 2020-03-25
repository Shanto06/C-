#include<bits/stdc++.h>

using namespace std;

void fib(int f[],int N)
{
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=N;i++)
    {

        f[i]=f[i-1]+f[i-2];
    }
}

void fibnum(int n)
{

    int m=n;
    int f[n+1];
    fib(f,n);
    for(int i=1;i<=n;i++)
    {
         cout<<f[m--]<<" ";
    }
}

int main()
{
    int n;cin>>n;
    fibnum(n);
}
