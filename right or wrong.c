#include<stdio.h>
int main()
{
    int ans,count;
    int right=0,wrong=0;

    for(count=1;count<11;count++)
    {
        printf("What is %d + %d?",count,count);
        scanf("%d",&ans);

        if(ans==count+count)
        {
            printf("Right");
            right++;
        }
        else
        {
            printf("Sorry, you are wrong");
            printf("the ans is %d",count+count);
            wrong++;
        }
    }
    printf("You got %d right and %d wrong",right,wrong);

    return 0;
}
