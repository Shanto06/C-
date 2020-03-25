#include<stdio.h>
int main()
{
    int i,cnt[100002]={0},n,arr[100005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        cnt[arr[i]]++;
    }
    for(i=0;i<100001;i++)
    {
        if(cnt[i]!=0)
        {
            printf("%d=%d\n",i,cnt[i]);
        }
    }







    return 0;

}
