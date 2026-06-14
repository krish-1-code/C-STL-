// Let's discuss all the modifiers we have in C++ vector:

#include<iostream>
#include<vector>

int main() {

    std::vector <int> vect;

    //Rn the vector has no element size - 0 and capacity = 0

    std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n'; 

    // To add elements to a vector

    vect.push_back(1);
    std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n';
     
    vect.emplace_back(2); // same thing as push back
    std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n'; 

    vect.insert(vect.begin()+2,3);
    std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n'; 


    //Using a for loop to add some more elements in this vector;


    for(int i = 4 ; i <= 10; i++) {

        vect.push_back(i);
        std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n'; 
    }



    // To remove elements from the vector:

    vect.pop_back();
    std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n';
    
    vect.erase(vect.end() - 4, vect.end() - 1 );
    std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n'; 
    return 0;
}