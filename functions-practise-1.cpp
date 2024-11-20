/*
author=@karukkuvelaero
file_name = functions-practise.cpp
function = to practise functions
*/

/*
Problem 1: Write a program using function to find fatctorial of a given number
Problem 2: Write a program using function to find fibonacci series upto n terms
Problem 3: Write a program using function to find prime no between 2 no
*/

#include <iostream>

int factorial (int);

void fibonacci (int);

bool isPrime (int);

int main ()
{
    int input_no;
    std::cout<<"Enter a number to find factorial: ";
    std::cin>>input_no;
    int factorial_ans = factorial(input_no);
    std::cout<<"\n Factorial is "<<factorial_ans<<std::endl;
     
    std::cout<<"Enter no of fibonacci terms you want to calculate from 0: ";
    std::cin>>input_no;
    fibonacci(input_no);

    int upper_limit, lower_limit;
    std::cout<<"Enter upper limit: ";
    std::cin>>upper_limit;
    std::cout<<"\n Enter lower limit: ";
    std::cin>>lower_limit;
    std::cout<<"\nPrime Numbers are: ";
    for(int i=lower_limit; i<=upper_limit;i++)
    {
        
        if(isPrime(i)==true)
        {
            std::cout<<i<<", ";
        }
    }

    return 0;
}

int factorial(int input)
{
    int ans = 1;
    if (input == 0 || input ==1)
        return 1;
    for(int i=1; i<=input; i++)
    {
        ans = ans*i;
    }
    return ans;
}

void fibonacci(int input)
{
    int next_sequence, last_sequence, current_sequence = 0;
    for (int i=0; i<input; i++)
    {
        if (i<=1)
        {
            current_sequence=i; last_sequence = i;
            std::cout<<i<<", ";
            continue;
        }
        if (i == 2)
        {
            std::cout<<current_sequence<<", ";
            continue;
        }
       
        next_sequence = last_sequence + current_sequence;
        last_sequence = current_sequence;
        current_sequence = next_sequence;
        std::cout<<next_sequence<<", ";
        

    }
}

bool isPrime(int no)
{
    // int tofind = no/2;
    for (int i = 2; i<no; i++)
    {
        if (no%i==0)
            return false;
        
    }
    return true;
}