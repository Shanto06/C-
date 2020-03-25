/*
#include<bits/stdc++.h>
using namespace std;

void  func()
{
    static int a;
   int b=0;
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    func();
    func();
    func();
    return 0;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;

class abc
{
public:
    static int a;
    int b=0;
    void fun(){cout<<++a<<" "<<++b<<endl;}
    abc(){b=0;}
};
int abc::a;
int main()
{
    abc ob,ob1;
    ob.fun();
    ob.fun();
    ob1.fun();
    return 0;
}
*/



#include<bits/stdc++.h>
using namespace std;

class abc
{
public:
    static int a;
    static int b;
    void fun(){cout<<++a<<" "<<++b<<endl;}
    abc(){b=0;}
};
int abc::a;
int abc::b;
int main()
{
    abc ob,ob1;
    ob.fun();
    ob.fun();
    ob1.fun();
    return 0;
}
