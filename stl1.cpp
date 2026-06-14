// Standard Template Libarary:
// 3 Main Component : Conatiner - Iterator - Algorithm;

//std::array

//Std::array ->   std::array< datatype , N > array_name;

// In std::array the array size is needed at compile time; We can't ask user {run time} to declare the size of array;


//What's the need of Standard array

// In the C type array, when we passed the array to a function it decayed to a pointer; if we had to find the size of an array
// inside the function then we had to manually set a size parameter, but we can send array in std::array as a arguement and it won't decay. 

// Also unlike traditional arrays we can declare and initalize arrays in different lines.

#include<iostream>
#include<array>

int main() {

    std::array<int , 5> arr1;
    arr1 = {1,2,3,4,5};

   //Also
   std::array<std::string,3> names = {"Rex","Austin","Liya"};

    // methods in std::array      1. at() 2. front()  3. back()  4. []

   std::cout<< names.at(2) << '\n';
   std::cout<< names.front() << '\n';
   std::cout<< names.back() << '\n';
   std::cout<< names[2] << '\n';


   return 0;
}