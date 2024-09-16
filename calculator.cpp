/*
author=@karukkuvelaero
file_name = calculator using do-while loop
function = to print n positive integers taken from user
*/

#include <iostream>
char choice;
int operand1, operand2,result;

int main ()
{
    do
    {
       std::cout<<"********************\n";
       std::cout<<"1. Addition\n";
       std::cout<<"2. Subtraction\n";
       std::cout<<"3. Multiplication\n";
       std::cout<<"4. Division\n";
       std::cout<<"Q. Quit\n";
       std::cout<<"Enter your choice: ";
        std::cin>>choice;
        switch (choice)
        {
            case '1':
            {
                std::cout<<"You Chose 1... Addition"<<std::endl;
                std::cout<<"Enter two numbers separated by space:  ";
                std::cin>>operand1>>operand2;
                result=operand1+operand2;
                std::cout<<"\nAddition is "<<result<<std::endl;
                break;
            }
            case '2':
            {
                std::cout<<"You Chose 2... Subtraction"<<std::endl;
                std::cout<<"Enter two numbers separated by space:  ";
                std::cin>>operand1>>operand2;
                result=operand1-operand2;
                std::cout<<"\nSubtraction is "<<result<<std::endl;
                break;
            }
            case '3':
            {
                std::cout<<"You Chose 3... Multiplication"<<std::endl;
                std::cout<<"Enter two numbers separated by space:  ";
                std::cin>>operand1>>operand2;
                result=operand1*operand2;
                std::cout<<"Multiplication is "<<result<<std::endl;
                break;
            }
            case '4':
            {
                std::cout<<"You Chose 4... Division"<<std::endl;
                std::cout<<"Enter two numbers separated by space:  ";
                std::cin>>operand1>>operand2;
                result=operand1/operand2;
                std::cout<<"Division is "<<result<<std::endl;
                break;
            }
            case 'Q':
            {
                std::cout<<"You Chose Q... Quit"<<std::endl;
                
                break;
            }

            default:
            {
                std::cout<<"Entered wrong choice, try again"<<std::endl;
                break;
            }

    }
    } while (choice!='Q');
    std::cout<<"Goodbye!"<<std::endl;
    return 0;   
}