#include<iostream>
using namespace std;

class complex
{
    int real,imag;
    public: void getdata(int x,int y)
            {
                real=x;
                imag=y;
            }
            friend complex mul(complex c1,complex c2);
            void display(void);
};

complex mul(complex c1,complex c2)
{
    complex c3;
    c3.real=c1.real*c2.real-c1.imag*c2.imag;
    c3.imag=c1.real*c2.imag+c1.imag*c2.real;
    return c3;


}
 void complex:: display(void)
 {
     cout<<real<<"+i"<<imag;
 }
int main()
{
complex a,b,c;
    a.getdata(5,2);
    b.getdata(3,4);
    c=mul(a,b);
    cout<<"First complex number is: ";
    a.display();
    cout<<"\nsecond complex number is: ";
    b.display();
    cout<<"\nMultiplication of two complex number is: ";
    c.display();

    return 0;
}

