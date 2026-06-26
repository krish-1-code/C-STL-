// Multiset: std::multiset

#include<iostream>
#include<set>
#include<string>
#include<vector>

int main() {

    std::vector<int> vect1;
    vect1= {9,7,7,6,3,1,2,2,4,7};
    std::multiset<int> set1(vect1.begin(), vect1.end());

    for(auto num : set1){

        std::cout<<num<<'\t';
    }
    return 0;
}