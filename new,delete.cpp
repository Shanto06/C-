#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr=new int [5];
    ptr[2]=34;
    cout<<ptr[2]<<endl;
    cout<<*(ptr+2)<<endl;
    delete [] ptr;


    return 0;
}
