#include<bits/stdc++.h>
using namespace std;

int GCD(int A,int B)
{
    return B==0?A:GCD(B,A%B);
}
int main()
{
    int p;
    p=GCD(200,42);
    cout<<p<<endl;
}
