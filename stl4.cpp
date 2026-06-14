// Lets discuss the remaining modifiers : .resize .reserve .fit_to_shrink and .empty;

#include<iostream>
#include<vector>

int main() {

    std::vector<int> vect;

    vect.reserve(20);

    for(int i = 1; i <= 25; i++) {

        vect.push_back(i);
        std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n'; 
    }

    vect.shrink_to_fit();
    std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n'; 



    vect.clear();
    
    std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n'; 
    
    if( vect.empty()) {
        
        std::cout<<"The vector is Empty!!!"<<'\n';
    }
    
    
    vect.resize(30);
    std::cout<< "Size of Vector : "<<vect.size()<< " and The Capacity of Vector is : " << vect.capacity()<<'\n'; 
    
    return 0;

}