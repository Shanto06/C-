#include<iostream>
using namespace std;

class student
{
    int marks1,marks2;
    public: void getdata()
            {
                cout<<"Enter the marks1: "<<endl;
                cin>>marks1;
                cout<<"Enter the marks2: "<<endl;
                cin>>marks2;
            }
            friend void average(student s);
};

void average(student s)
{
    float avg;
    avg=(s.marks1+s.marks2)/2;
    cout<<"average marks= "<<avg<<endl;
}

int main()
{
    student shanto;
    shanto.getdata();
    average(shanto);

    return 0;
}
