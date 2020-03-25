#include<bits/stdc++.h>
#include<cstdio>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>


using namespace std;
int main()
{

    vector<int>vec;
    vector<int>::iterator it;


        vec.push_back(98);
        vec.push_back(8);
        vec.push_back(9);
        vec.push_back(10);
        vec.push_back(18);
        vec.push_back(29);

        sort(vec.begin(),vec.begin()+4);

    for(it=vec.begin();it!=vec.end();it++)

    cout<<*it<<"\t";
    cout<<endl;


    return 0;
}

