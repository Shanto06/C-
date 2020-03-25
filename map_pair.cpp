#include<bits/stdc++.h>
#include<utility>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector<pair<int,string>>v;
    vector<pair<int,string>>::iterator it;

    v.push_back(make_pair(6,"shanto"));
    v.push_back(make_pair(31,"biddut"));
    v.push_back(make_pair(37,"pritom"));

    for(it=v.begin();it!=v.end();it++)
    {
        cout<<it->first<<" = "<<it->second<<endl;
    }

    return 0;
}
