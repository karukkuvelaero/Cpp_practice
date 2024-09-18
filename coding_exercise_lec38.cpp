/*
author=karukkuvelaero
filename=coding_exerceise_lec38.cpp
function=using range based for loop do some tasks
*/

#include <iostream>
#include <vector>

int main ()
{
    //The goal is print only some values considering -1 as noise and omit it and -99 as endpoint to stop the printing
    std::vector<int> a = {1,10,-1,5,6,-1,7,-99,8,10};
    for(auto b:a)
    {
        if (b==-1)
        continue;
        else if (b==-99)
        {               
            break;
        }
        std::cout<<b<<std::endl;
        
    }
    return 0;
}