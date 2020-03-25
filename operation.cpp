#include<iostream>
using namespace std;
int main()
{
    int n,number1,number2;
    cout<<"what operation do you want to do?"<<endl;
    cout<<"press 1 for addition"<<endl;
    cout<<"press 2 for subtraction"<<endl;
    cout<<"press 3 for multiplication"<<endl;
    cout<<"press 4 for division"<<endl;

    cout<<"Enter your choice: "<<endl;
    cin>>n;

    if(n==1)
    {
        cout<<"Enter the number1"<<endl;
        cin>>number1;
        cout<<"Enter the number2"<<endl;
        cin>>number2;
        cout<<"The sum of number1 & number2= "<<number1+number2<<endl;

    }
    if(n==2)
    {
        cout<<"Enter the number1"<<endl;
        cin>>number1;
        cout<<"Enter the number2"<<endl;
        cin>>number2;
        cout<<"The subtraction of number1 & number2= "<<number1-number2<<endl;
    }
    if(n==3)
    {
        cout<<"Enter the number1"<<endl;
        cin>>number1;
        cout<<"Enter the number2"<<endl;
        cin>>number2;
        cout<<"The multiplication of number1 & number2= "<<number1*number2<<endl;
    }
    if(n==4)
    {
        cout<<"Enter the number1"<<endl;
        cin>>number1;
        cout<<"Enter the number2"<<endl;
        cin>>number2;
        if(number2==0)
            cout<<"Error"<<endl;
        else

        cout<<"The division of number1 & number2= "<<number1/number2<<endl;
    }


}
