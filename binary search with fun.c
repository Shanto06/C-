#include<stdio.h>
int bin(int arr[],int num);
int main()
{
    int array[50];
    int high_index ;
    int low_index;
    int mid_index;
    int num;
    num = binary_function(97);


    if(low_index > high_index)
    {
        printf("%d is not in the array\n",num);
    }

    else
    {
        printf("%d is the found in the array.It is the %d element of the array\n",array[mid_index],mid_index);

    }

    return 0;
}

int binary_function(int array[50],int num)
{
    int arr[50]={2,3,5,7,8,9,12,54,76,88,97,100};
    int mid_index;
    int high_index = 15;
    int low_index = 0;
    ///int num1 = 97;

    while(low_index <= high_index)
    {
        mid_index = (low_index + high_index)/2;

        if(num == arr[mid_index])
        {
            break;
        }
         else if(num < arr[mid_index])

        {
             high_index = mid_index - 1;
        }

        else
        {
            low_index = mid_index + 1;
        }


    }
    return num;

}





