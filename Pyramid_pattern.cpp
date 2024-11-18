/*
author=@karukkuvelaero
file_name = Pyramid_pattern.cpp
function = to print a pyramid pattern using given string
*/
/*
Input: ABCDE
Output:    A
          ABA
         ABCBA
        ABCDCBA
       ABCDEDCBA*/

#include <iostream>
#include <string>

std::string input;
std::string output;

int main ()
{
    std::cout<<"Enter the input string: ";
    std::cin>>input;
    int white_spaces = input.size();
    std::cout<<white_spaces<<std::endl;


    for (int i = 0; i<input.size(); i++)
    {
        for (int k = white_spaces ; k > 0; k--)
        {
            std::cout<<" ";
        }
        for(int j = 0; j <=i; j++)
        {
            std::cout<<input[j];
        }
        for (int j = i-1; j>=0; j--)
        {
            std::cout<<input[j];
        }
        std::cout<<"\n";
        white_spaces--;
    }
    // output = input;
    // std::cout<<"\n"<<output<<std::endl;

    return 0;
}