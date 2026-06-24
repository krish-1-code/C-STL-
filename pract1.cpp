#include<iostream>
#include<array>

int arraysum( std::array<int, 5> arr1){

    int sum = 0;
    for(auto nums : arr1){

        sum += nums;
    }

    return sum;

}

int main() {

    std::array<int , 5> array1;

    array1 = {5,10,15,20,25};

    int total = arraysum(array1);

    std::cout<<"The sum of all array element is "<<total<<'\n';


    return 0;
}