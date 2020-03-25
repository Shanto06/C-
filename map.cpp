#include<bits/stdc++.h>
#include<stdio.h>
#include<map>
#include<iterator>
#include<utility>

using namespace std;

int main()
{
     map<string,int>m;
     map<string,int>::iterator it;

     m["shanto"]=06;
     m["biddut"]=31;
     m["pritom"]=37;


//    m.insert(make_pair("pritom",37));

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;

    }

    return 0;
}
