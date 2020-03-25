#include<bits/stdc++.h>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int i,j=0,cnt=0,n,k;
    int ar[100];

    scanf("%d",&n);

    while(n!=0)
    {
        i=n%2;
        ar[j]=i;
        j++;
        n=n/2;
    }


    cout<< ar.reverse();

    return 0;
}
