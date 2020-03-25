#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    int area()
    {
        return height*width;
    }
    void set(int a,int b)
    {
        height=a;
        width=b;
    }

};

class cost
{
    int costrate;
public:
    void setvalue(int r)
    {
        costrate=r;
    }
    int totalcost(rectangle abc)
    {
        return costrate*abc.area();
    }
};

int main()
{
    rectangle obj;
    cost p;
    obj.set(5,9);
    p.setvalue(100);
    cout<<obj.area()<<endl;

    cout<<p.totalcost(obj)<<endl;
}
