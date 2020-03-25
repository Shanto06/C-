#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;

public :
    int area()
    {
        return width*height;
    }

    void set(int height,int width)
    {
        this->height=height;
        this->width=width;
    }


};
rectangle scan()
{
    int h,w;
    cin>>h>>w;
    rectangle ob;
    ob.set(h,w);
    return ob;
}
void print(rectangle abc)
{
    cout<<abc.area()<<endl;
}
int main()
{
    rectangle obj;
    obj=scan();
    print(obj);

}
