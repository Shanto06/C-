#include<iostream>
using namespace std;

 class rectangle
    {
     public:

            int height;
            int weidth;
            int area();
    };

int rectangle::area()
{
    return height*weidth;
}

int main()
{
   rectangle obj;
   obj.height=10;
   obj.weidth=8;

   cout<<obj.area()<<endl;


    return 0;
}
