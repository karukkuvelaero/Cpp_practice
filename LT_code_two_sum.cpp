/*
author=@karukkuvelaero
file_name = LT_code_two_sum.cpp
function = to solve Leet code two sum problem. Link: https://leetcode.com/problems/two-sum/description/

*/


/*

problem statement: 

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

*/

#include <iostream>

int target;

int main ()
{
    int arr[]= {1,2,3,4,5};
    std::cout<<"Enter the target"<<std::endl;
    std::cin>>target;
    bool state=false;
    
    for(int i=0; i<5 ; i++)
    {
        for(int j=i+1; j<5 ; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                std::cout<<"pairs are"<<arr[i]<<" & "<<arr[j]<<std::endl;
                state = 1;
                            
            }
           
        }
        if (state)
        {
            break;
        }
    }
    std::cout<<"Out of loop"<<std::endl;
    return 0;
}
