#include <iostream>
#include <iomanip>
#include <limits>

int short io=4545;
float low = 5859.9008;
double love = 125.65456219;
int main ()
{
    std::cout<<io<<std::endl;
    std::cout<<std::setprecision(10);
    std::cout<<std::numeric_limits<long double>::digits10<<std::endl;
    std::cout<<low<<std::endl;
    std::cout<<love<<std::endl;

    return 0;
}