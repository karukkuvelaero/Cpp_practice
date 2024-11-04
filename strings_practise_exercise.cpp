/*
author=@karukkuvelaero
file_name = strings_practise_exercise.cpp
function = to find no of elements divisible by either 3 or 5
*/

/*
Problem, for a given string Full_name = "Jayantikhatri"
1. Declare & initialize a string variable F_name from variable Full_name
2. Declare & initialize a string L_name using substr() method
3. Concatenate F_name & L_name using + operator, 
    insert a space using insert() function
*/


#include <iostream>
#include <string>

int main ()
{
    std::string Full_name = "Jayantikhatri";

    std::string f_name{Full_name,0 , 7};

    std::cout<<"First_name is "<<f_name<<std::endl;

    std::string l_name = Full_name.substr(7,Full_name.length());

    std::cout<<"Last_name is "<<l_name<<std::endl;

    std::string Joined_name = f_name+l_name;

    Joined_name.insert(7, " ");

    std::cout<<"Joined_name after entering space is "<<Joined_name<<std::endl;
    return 0;
}