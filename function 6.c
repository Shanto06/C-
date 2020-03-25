#include<stdio.h>
int fun1(int j,int k)
{
    int result;
    result = j%k;
    if(result==0)
    {
        printf("the DIV =1");
    }
    return result;
}

int fun2(int j,int k)
{
    int result1;
    result1 = j%k;
     if(result1!=0)
    {
    printf("the DIV =0");
    }
    return result1;
}
int main()
{
    int j,k,m,p,result,result1;
    scanf("%d%d",&j,&k);
    m=fun1(j,k);

    p=fun2(j,k);

}
