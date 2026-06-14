// std::vector

// Think of a vector as a dynamic array or list in python

// It has dynamic size; It is idexable; It is ordered and supports 1. Append 2. Insert 3. remove


// For element Access:

// at() - [] - back() - front() - data()

//Modifiers:

// insert() - emplace() - push_back() - emplace_back() - pop_back() - resize() - swap() - erase() - clear

//syntax:  std::vector< int > vector_name;

// How does this dynamic sizing works?

// firstly there is a static array; whenever we append new element to that static array, it creates a new array twice it's size and copies the older array elements along with the new value;


#include<iostream>
#include<vector>
int main() {

    std::vector< int > nums;

    nums ={1,2,3,4,5};

    for (int x : nums) {

        std::cout<<x<<'\t';
    }
    std::cout<<'\n';

    //3 types of for each loop;

    //1. for(const int& x : array) {} // Only reads the reference of the array; doesn't make copy of that array and helps prevent accidental modification;
    //2. for( int &x : array) {} // Useful to modify elements of the array; uses the reference of that array and doesn't make a copy of that array;
    //3. for( int x : array) {}  // Only useful when we have a small array and we only have to read the elemenst of that array; It makes copy of that original array;


    // Accessing the elements of the array;
    // 2 WAYS:
    
    // 1. array[x]; - lets say there are just 5 elements in our array and we say array[100] we will receive some garbage value; which means it's not exception safe; 
    // 2. array.at(x); - lets say there are just 5 elements in our array and we say array[100] we will receive an exception saying out of bounds; It's exception safe;


    std::cout<<nums[1]<<'\n';
    std::cout<<nums.at(1)<<'\n';

    std::cout<<nums[10]<<'\n';
    //std::cout<<nums.at(10)<<'\n';
}