#include<iostream>
#include<cctype>
using namespace std;
#define DELAY 100000

void sleep(int n);
void sleep(char *n);

void sleep(int n)
{
    long i;
    for(;n;n--)
    for(i=0;i<DELAY;i++);
}
void sleep(char *n)
{
    long i;
    int j;
    j=atoi(n);
    for(;j;j--)
        for(i=0;i<DELAY;i++);
}
int main()
{
    cout<<'.';
    sleep(3);
    cout<<'.';
    sleep("2");
    cout<<'.';

    return 0;
}
