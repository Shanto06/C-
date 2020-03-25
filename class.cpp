#include<iostream>
using namespace std;
class myclass
{
    int a;
public:
    void set_a(int num);
    int get_a();


};

void myclass::set_a(int num)
{
    a=num;
}
int myclass::get_a()
{
    return a;
}
int main()
{
    myclass obj,obj1;
    obj.set_a(23);
    obj1.set_a(209);
    cout<<obj.get_a()<<endl;
    cout<<obj1.get_a()<<endl;

    return 0;
}
