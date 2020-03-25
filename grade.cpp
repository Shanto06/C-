#include<iostream>
using namespace std;
int main()
{
    int percent;
    cout<<"Enter the percent"<<endl;
    cin>>percent;

    if(percent>=60)
    {
        cout<<"first division"<<endl;
    }

   else if(percent>=45)
    {
        cout<<"second division"<<endl;
    }
    else if(percent>=30)
    {
        cout<<"third division"<<endl;
    }
    else
    {
        cout<<"fail"<<endl;
    }

    return 0;
}
