/*
author=karukkuvelaero
filename=vectors_pair.cpp
function= vector of size n holds pair of integers, calculate sum of second elements of pairs
*/

#include <iostream>
#include <vector>
#include <utility>

int sum=0;

int main ()
{
    std::vector <std::pair<int,int>> V= {{1,2},{15,10,},{5,-4}};
    for (auto i: V)
    {
        sum += i.second; 
    }

    std::cout<<"Sum is "<<sum<<std::endl;
}