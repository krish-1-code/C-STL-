//std::set 

#include<iostream>
#include<set>
#include<string>
#include<vector>

int main() {



    std::vector<int> vect1;
    vect1 ={7,6,6,1,2,3,3,4,8,8};
    std::set<int> set1(vect1.begin(), vect1.end());

    for(auto num : set1){
        std::cout<<num<<'\t';
    }


}