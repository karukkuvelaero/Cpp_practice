/*
author=@karukkuvelaero
file_name = functions_overload.cpp
function = to practise functions_overload
*/

/*
Problem 1: Write a program to calculate area for the following shapes using fn overloading:
                1. Square (int argument)
                2. Circle (double argument)
                3. Rectangle(double , double)
*/

#include <iostream>

int option;
double result;

int area (int); // to calculate area of square
double area (double); //to calculate area of circle
double area (double, double); //to calculate area of rectangle

int main ()
{
    std::cout << "Choose what shape you want to calculate:\n"
             "  1. Square\n"
             "  2. Circle\n"
             "  3. Rectangle\n"
             "Enter your choice: ";

    std::cin>>option;

    switch (option)
    {
        case 1:
        {
            int side;
            std::cout<<"Square is selected. Enter side: ";
            std::cin>>side;
            result = area(side);
            break;
        }
        case 2:
        {
            double radius;
            std::cout<<"Circle is selected. Enter radius: ";
            std::cin>>radius;
            result = area(radius);
            break;
        }
        case 3:
        {
            double length;
            double breadth;
            std::cout<<"Rectangle is selected. \n"
                        "Enter the length : ";
            std::cin>>length;
            std::cout<<"\nEnter the breadth : ";
            std::cin>>breadth;
            result = area (length, breadth);
            break;
        }
        default:
        {
            std::cout<<"Wrong choice, deleting your system.....";
            return 0;
        }
        
    }
    std::cout<<"Area is "<<result<<std::endl;
}

int area(int a)
{
    return a*a;
}
double area(double a)
{
    return 3.14*a*a;
}
double area(double a, double b)
{
    return a*b;
}