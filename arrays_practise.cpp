/*
author=@karukkuvelaero
file_name = arrays_practise.cpp
function = to practise arrayss
*/

#include <iostream>


int main ()
{
    //Problem 1: Declare a array of 15 elements and assign every elements except first and last element to be zero,
    //for the first element declare it as 10 for the last element declare it as 150
    int arr[15];
    arr[0]=10;
    arr[14]=150;
    int counter =0;

    for(int i=0; i<15;i++)
    {
        if (i>0 && i<14)
        {
            arr[i]=0;
        }
        std::cout<<arr[i]<<std::endl;
        std::cout<<"COunter: "<<++counter<<std::endl;
    }

    /*
    Problem 2: Write a program to declare two arrays of size 5 
    And store the sum of the values of these arrays in 3rd array
    */
   counter = 1;
   int array1[5],array2[5],array3[5];
    for(int i = 0;  i<5; i++)
    {
        std::cout<<"\nEnter array 1, element "<<counter<<" value:";
        std::cin>>array1[i];
        std::cout<<"\nEnter array 2, element "<<counter<<" value:";
        std::cin>>array2[i];
        
        array3[i]=array1[i]+array2[i];
        counter++;
    }
    std::cout<<"\nArray 1 values are";
    for (int i=0 ; i<5; i++)
    {
        std::cout<<"\n"<<array1[i]; 
    }
     
    std::cout<<"\nArray 2 values are";
    for (int i=0 ; i<5; i++)
    {
        std::cout<<"\n"<<array2[i];
     
    }

    std::cout<<"\n Sum : Array 3 values are";
    for (int i=0 ; i<5; i++)
    {
        std::cout<<"\n"<<array3[i]; 
    }

    std::cout<<"\n Program terminated"<<std::endl;
    return 0;
}