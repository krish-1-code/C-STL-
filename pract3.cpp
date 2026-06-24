//Reverse a standard array : use pass by refernce:

#include<iostream>
#include<array>

void reverse( std::array<int, 10> &arr1){

    std::cout<<"Size of the array is "<<arr1.size()<<'\n';

    for(int i = 0; i < arr1.size()/2; i++) {

        int temp = arr1[i];
        arr1[i] = arr1[arr1.size()-i-1];
        arr1[arr1.size()-i-1] = temp;

    }

    
}

int main(){


    std::array<int , 10> arr1 = {1,2,3,4,5,6,7,8,9,10};

    reverse(arr1);

    for (auto num : arr1) {
        std::cout<<num;
    }

    return 0;
}