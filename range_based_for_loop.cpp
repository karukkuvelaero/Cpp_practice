/*
author=@karukkuvelaero
file_name = range_based_for_loop
function = to find no of elements divisible by either 3 or 5
*/

#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> num = {3,6,15,17,18,21,55,100,200,300};
    int counter=0;
    for(int i:num)
    {
        if (i%3==0 || i%5==0)
        counter++;
    }
    std::cout<<"Counter value is "<<counter<<std::endl;
    return 0;
}