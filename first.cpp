//Author - Karukkuvel Raj D
/*Written on August 6 20224
*/

#include <iostream>
#define PI 3.1415
int r=5;
void area();

class MyClass
{
    public:
        int a;
        void display()
        {
            std::cout<<"inside class"<<std::endl;
        }
};

int main()
{
    MyClass m;
    m.a=95;
    m.display();
    area();
    std::cout<<"hello world from main function!!"<<std::endl;
    std::cout<<m.a<<std::endl;
    return 0;

}

void area()
{
    float area;
    area = PI*r*r;
    std::cout<<area<<std::endl;

}