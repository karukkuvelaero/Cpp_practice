/*
@author=karukkuvelaero
filename=vectors_practise.cpp
function= practise problems for vectors
*/

#include <iostream>
#include <vector>
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
    */
   std::vector<int> Vect1 = {1,2,3,4,5};
   std::vector<int> Vect2 = {11,12,13,14,15};

    std::vector<int>::iterator it1;
    std::vector<int>::iterator it2;

    it1 = Vect1.begin();
    it2 = Vect2.begin();

    if (Vect1.size()==Vect2.size())
    {
        for(i=0; i<Vect1.size(); i++)
        {
            
        }
    }


    return 0;

}