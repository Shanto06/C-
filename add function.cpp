#include<iostream>
using namespace std;

int add(int x,int y);
int main()
{

    int b;
    b=add(3,5);
    cout<<"The sum ="<<b<<endl;;
    return 0;
}

int add(int x,int y)
{
    int result;
    result=x+y;
    return result;
}
