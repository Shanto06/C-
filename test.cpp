

#include<cstdio>
#include<iomanip>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<deque>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<limits>
#include<math.h>
//#include<bits/stdc++.h>
long long ans[100000+5];
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);


    int t;
    cin>>t;
    int i = 1;
    while(t--){

        int a[1000];
        int b [1000];
        string s[100000];
        getchar();
        for(int j = 0;j<5;j++){
            string s1;

            cin>>s[j]>>a[i];

            b[j] = a[i];
        }

        sort(b,b+5);

        int z = b[4];

        for(int k =0;k<5;k++)
        {
            if(z == a[k])
            {
                cout<<"Case "<<i<<": ";
                cout<<s[k]<<endl;
                i++;
                break;

            }
        }

    }
}
