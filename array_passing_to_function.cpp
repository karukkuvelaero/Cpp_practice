/*
author=@karukkuvelaero
file_name = arrays_passing_to_function.cpp
function = to practise arrays passing to function
*/

/*Problem statement: Write a program using functions to find minimum and maximum values in arrays*/

#include <iostream>

int min(int[],int);
int max(int[],int);

int main ()
{
    int arr[]={15,10,2,4,6,8,52};

    int size = sizeof(arr)/sizeof(int);

    std::cout<<"Max size is "<<max(arr, size)<<std::endl;
    std::cout<<"Min size is "<<min(arr, size)<<std::endl;
}

int min(int a[], int size)
{
    int min=a[0];
    for (int i = 0 ; i<size; i++)
    {
        if (a[i]<min)
            min = a[i];
    }
    return min;
}

int max(int a[], int size)
{
    int max=a[0];
    for (int i = 0 ; i<size; i++)
    {
        if (a[i]>max)
            max = a[i];
    }
    return max;
}

