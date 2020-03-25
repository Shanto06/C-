#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={2,6,45,9,4,0,1,3,5,8};
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    sort(arr,arr+10);

    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
}
