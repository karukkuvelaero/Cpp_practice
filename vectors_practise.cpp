/*
@author=karukkuvelaero
filename=vectors_practise.cpp
function= practise problems for vectors
*/

#include <iostream>
#include <vector>
#include <algorithm>
int main ()
{
    /*
    Problem 1: V = {1,2,3,4,5,6,7,8,9,10}. Erase all the even numbers from vector V
    */
   std::vector<int> V = {1,2,3,4,5,6,7,8,9,10};
   std::vector<int>::iterator it;
   it = V.begin ();
       
    for (int i=0; i<V.size(); i++)
    {
        // V[i] = j;
        // j++;
        std::cout<<V[i]<<"\n";
    }
    std::cout<<"Sizeof Vector: "<<V.size()<<"\n";

    for (int i=0; i<V.size(); i++)
    {
        
        if (V[i]%2==0)
        {
            V.erase(it);
        }
        it++;
    }
    for (int i=0; i<V.size(); i++)
    {
        
        std::cout<<V[i]<<"\n";
    }
    std::cout<<"Sizeof Vector: "<<V.size()<<"\n";


    /*
    Problem 2 : Vect1 = {1,2,3,4,5}
                Vect2 = {11,12,13,14,15}
                Swap elements between these vectors
            
    */
   std::vector<int> Vect1 = {1,2,3,4,5};
   std::vector<int> Vect2 = {11,12,13,14,15};

    swap(Vect1,Vect2);
    std::cout<<"Vect1 is ";
    for (int i : Vect1)
    {
        std::cout<<i<<", ";   
    }
    std::cout<<"\nVect2 is ";
    for (int i : Vect2)
    {
        std::cout<<i<<", ";
    }

    /*
    Problem 3 : Write a program to sort the vector
                V= {10,2,-1,4,79,60}
    */

   std::vector<int> Final_vector = {10,2,-1,4,79,60};

   std::cout<<"\nBefore sorting:";
   for (auto i : Final_vector)
   {
    std::cout<<i<<", ";
   }
   
   std::sort(Final_vector.begin(),Final_vector.end());

   std::cout<<"\nAfter sorting:";
   for (auto i : Final_vector)
   {
    std::cout<<i<<", ";
   }
   std::cout<<std::endl;
    return 0;

    

}