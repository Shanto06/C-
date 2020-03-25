#include<bits/stdc++.h>

using namespace std;

int ismultiply3(int n)
{
    int odd_count=0;
    int even_count=0;
    if(n<0)n=n*(-1);

    if(n==0)
        return 1;
    if(n==1)
        return 0;

    while(n)
    {
        if(n&1)
            odd_count++;
        n=n>>1;


        if(n&1)
            even_count++;
        n=n>>1;
    }

    return ismultiply3(abs(odd_count-even_count));
}

int main()
{
    int num;
   cin>>num;

    if(ismultiply3(num))
    {
        cout<<num<<" is multiply of 3"<<endl;
    }
    else
    {
        cout<<num<<" is not multiply of 3"<<endl;
    }
}
