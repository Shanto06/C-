#include<iostream>
using namespace std;

class rectangle
{
public:
    int height;
    int width;
    int area();
    rectangle(int h,int w); ///you will want to using parameter
    ~rectangle();

};
int rectangle::area()
{
    return height*width;
}

rectangle::rectangle(int h,int w)
{
    height=h;
    width=w;
    cout<<"constructor"<<area()<<endl;
}
rectangle::~rectangle()
{
   cout<<"destructor"<<area()<<endl;
}

int main()
{
  rectangle obj(3,4),obj1(3,2);
  ///cout<<obj.area()<<endl;
    return 0;
}

