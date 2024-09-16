/*
author=@karukkuvelaero
file_name = sum_of_positive_integers
function = to print n positive integers taken from user
*/

#include <iostream>

int number, sum = 0;

int main ()
{
    do
    {
        /* code */
        sum+=number;
        std::cout<<"enter no: ";
        std::cin>>number;
        

    } while (number>=0);

    std::cout<<"\nThe sum is "<<sum<<std::endl;
    
    return 0;

}