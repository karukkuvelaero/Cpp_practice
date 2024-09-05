/*
author=@karukkuvelaero
file_name = sum_of_odd_integers
function = to print odd integers in given limits
*/
#include <iostream>

int main ()
{
    int lowerNO,upperNO=0;
    int sum =0;
    std::cout<<"Enter the lower limit:";
    std::cin>>lowerNO;
    std::cout<<"\nEnter the upper limit:";
    std::cin>>upperNO;
    std::cout<<"entered lower limit is"<<lowerNO<<std::endl;
    std::cout<<"entered lower limit is"<<upperNO<<std::endl;


    for (int i = lowerNO; i<=upperNO; i++)
    {
        if (i%2!=0)
            sum += i;
        std::cout<<sum<<std::endl;
    }
    std::cout<<"\nSum is "<< sum<<std::endl;
    return 0;
}