#include<iostream>
using namespace std;
class student
{
    private: int marks;
    public: int rollnumber;
            void getdata(int number)
            {
               marks=number;
            }

            void display()
            {
                cout<<"The roll number is :"<<rollnumber<<endl;
                cout<<"The marks is :"<<rollnumber<<endl;
            }
};

int main()
{
    student shanto;
    shanto.rollnumber=6;
    shanto.getdata(78);
    shanto.display();

    return 0;
}
