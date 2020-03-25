#include<bits/stdc++.h>
using namespace std;

int GCD(int A,int B)
{
    B==0?A:GCD(B,A%B);
}

int LCM(int a,int b)
{
    int p=GCD(a,b);
    return (a/p)*b;
}
int main()
{
    int x;
    x=LCM(16,10);
    cout<<x<<endl;
}
