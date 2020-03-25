#include<iostream>
using namespace std;
int main()
{
    int i,j;
    /*
    for(i=1;i<=10;i++)
    {
        if(i==6)
            {
                break;
            }
        cout<<i<<endl;
    }
    */

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<j<<endl;
            if(j==3)
                break;
        }

    }


    return 0;
}
