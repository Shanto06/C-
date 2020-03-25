#include<iostream>
using namespace std;

class student
{
    public: static int age;
            void display();


};
int student::age=15;
void student::display()
{
    cout<<"my age is: "<<age<<endl;
}

int main()
{
    student shanto;
    shanto.age=20;
    shanto.display();


}
