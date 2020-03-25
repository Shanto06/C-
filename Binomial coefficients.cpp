#include<bits/stdc++.h>

using namespace std;

int nCr(int n,int r)
{
    if(n==r)
        return 1;
    if(r==1)
        return n;
    if(n>r)
        return nCr(n-1,r-1) + nCr(n-1,r);
    else
        return 0;
}

int main()

{
    int n,r,p;
    cin>>n>>r;
   p= nCr(n,r);
    cout<<p<<endl;


}
