#include<iostream>
#include<cctype>
using namespace std;

int min(int a,int b);
double min(double a,double b);
char min(char a,char b);

/// min() for ints
int min(int a,int b)
{
    return a<b? a:b;
}
/// min() for double
double min(double a,double b)
{
    return a<b? a:b;
}
/// min() for char

char min(char a,char b)
{
    return tolower(a)<tolower(b)? a:b;
}
int main()
{
    cout<<"Min is: "<<min('a','x')<<endl;
    cout<<"Min is: "<<min(34,11)<<endl;
    cout<<"Min is: "<<min(343.312,56384.98974)<<endl;


    return 0;
}
