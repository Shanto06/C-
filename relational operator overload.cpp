#include<bits/stdc++.h>

using namespace std;

class Number
{
    int x,y;
public:
    Number()///constructor
    {
        x=0;
        y=0;
    }
    Number (int a,int b)///constructor
    {
        x=a;
        y=b;
    }
    void get(int &a,int &b)
    {
        a=x;
        b=y;
    }
    void set(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }

     Number operator + (Number ob);
     bool operator > (Number ob);
};
Number Number::operator + (Number ob)
{
    Number tmp;
    tmp.x=x+ob.x;
    tmp.y=y+ob.y;

    return tmp;
}

bool Number::operator > (Number ob)
{
    return (x+y)>(ob.x+ob.y);
}

int main()
{
    Number n1(1,3),n2(3,4),n3;
    n3=n2+n1;
    n3.print();
    if(n1>n2)
        cout<<"n1"<<endl;
        else
        cout<<"n1"<<endl;


}
