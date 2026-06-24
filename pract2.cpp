// Finding the target and returning true or false;

#include<iostream>
#include<array>

bool finding(std::array<int , 10> arr1, int target){

    for(auto num : arr1){
    
        if(num == target) {
            return true;
        }
    }
    return false;
}

int main() {

    std::array<int, 10> array1 = {2,4,6,8,10,12,14,16,18,20};

    int target = 17;

    bool result = finding(array1,target);

    std::cout<<"Is "<<target<<" in the array? "<<result<<'\n';
}