#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cnt,marks,i,total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
    65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
    62, 66, 76, 70, 67, 65, 77, 63};
    for(marks=50;marks<=100;marks++)
    {
        cnt=0;
        for(i=0;i<40;i++)
        {
            if(total_marks[i]==marks)
                cnt++;
        }
        if(cnt==0)
        {
            cout<<"marks: "<<marks<<" "<<"count: "<<cnt<<endl;
        }
    }


    return 0;
}
