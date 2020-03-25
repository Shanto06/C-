#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i,j,temp;
    for(i=9,j=0;j<i;j++,i--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(j=0;j<10;j++)
    {
        cout<<arr[j]<<endl;
    }

    return 0;
}
