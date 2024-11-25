/*
author=@karukkuvelaero
file_name = recursion_function_2.cpp
function = to practice recursion
*/

/*
WAP to calculate total money that will be accumulated if you start with 1 Rs. & double it everyday
for N no of days
*/
#include <iostream>

int money(int no_of_day, int amount)
{
    if (no_of_day==1)
        return amount;
    
    return (2*money(no_of_day-1, amount));
}

int main()
{
    std::cout<<"Enter no of days: ";
    int days;
    std::cin>>days;
    std::cout<<"\nEnter starting amount: ";
    int amount;
    std::cin>>amount;
    int answer = money(days, amount);
    std::cout<<"The amount is "<<answer<<std::endl;

    return 0;
}