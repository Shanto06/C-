#include<bits/stdc++.h>
using namespace std;

class Number
{
    int x,y;
public:
    Number(){x=0,y=0;}///constructor
    Number(int a,int b){x=a,y=b;}///constructor
    void get(int &a,int &b){a=x,b=y;}
    void set(int a,int b){x=a,y=b;}
    void print(){cout<<x<<" "<<y<<endl;}

    Number operator + (Number ob);


};
Number Number::operator+(Number ob)
{
    Number tmp;
    tmp.x=x+ob.x;
    tmp.y=y+ob.y;

    return tmp;
}
int main()
{
    Number n1(5,6),n2(7,8),n3;
    n3=n1+n2;
    n3.print();

    return 0;
}
