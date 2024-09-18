/*
author=karukkuvelaero
filename=sum_of_product_of_array_elements.cpp
function=to calculate sum of product of all pairs of array elements
*/
 #include<iostream>

 int main ()
 {
    int data[]={10,1,3,-4,7,5};
    int result=0;
    /*pairs are
    [10,1][10,3][10,-4][10,7][10,5]
    [1,3][1,-4][1,7][1,5]
    [3,-4][3,7][3,5]
    [-4,7][-4,5]
    [7,5]*/
    for(int i=0; i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            result+=data[i]*data[j];
        }  
    }
    std::cout<<result;
    return 0;
 }