#include<bits/stdc++.h>

using namespace std;

class abc
{
    int *p;
public:
    abc(){p=new int (0);cout<<"cons---:"<<*p<<endl;}
    ~abc(){cout<<"dist---:"<<*p<<endl; delete p;}
    void set(int x){*p=x;}
    void get(){cout<<*p<<endl;}

};

int main()
{
    abc a;
    a.get();
    abc b=a;


}
