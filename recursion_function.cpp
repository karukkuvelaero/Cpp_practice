/*
author=@karukkuvelaero
file_name = recursion_function.cpp
function = to practice recursion
*/

/*
WAP to find sum of digits of a given number using Recursion
*/

#include <iostream>

int input;
int output;

int digit(int number)
{
    if (number==0)
    {
        return 0;
    
    }
    return (number%10)+digit(number/10);
}


int main()
{
    std::cout<<"Enter your number: ";
    std::cin>>input;

    output= digit(input);
    std::cout<<"\nSum of digits is "<<output<<std::endl;
    return 0;
}