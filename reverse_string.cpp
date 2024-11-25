#include <iostream>
#include <string>

int main ()

{
	std::string input;
	std::cout<<"Enter the input string: ";
	getline(std::cin, input);
	
	int str_size = input.size();
	std::string output;
	
	for (int i=input.size()-1; i>=0 ; i--)
	{
		output.push_back(input[i]);
	}
	std::cout<<"Reversed String is : " <<output<<std::endl;
	
	return 0;
}
