#include<bits/stdc++.h>
using namespace std;

void fib( int f[])
{

    f[1]=1;
    f[2]=2;
    for(int i=3;i<=80;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
}
void fibsum(int n)
{
    int f[10000];
    fib(f);
    int m=n;

    long long sum=0;
    for(int i=1;i<=(sqrt(m)+5);i++)
    {
        if(f[i]<=n)
        {
            if(f[i]%2==0)
            {
                sum+=f[i];
            }
        }

    }
    cout<<sum<<endl;
}

int main()
{
    long long n;
    int T;
    cin>>T;

    while(T--)
    {
        cin>>n;
        fibsum(n);
    }


}
