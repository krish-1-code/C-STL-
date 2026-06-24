#include<iostream>
#include<vector>

void reverse( std::vector<int> &vect1){

    int size = vect1.size();

    for(int i = 0; i < size/2 ; i++) {

        int temp = vect1.at(i);
        vect1.at(i) = vect1[size-i-1];
        vect1[size-i-1] = temp;

    }

    vect1.push_back(6);
    vect1.emplace_back(9);
    vect1.pop_back();
    vect1.erase(vect1.end());

    
}

int main() {

    std::vector <int> vect = {1,2,3,4,5};
    reverse(vect);

    
    for (auto num : vect) {
        std::cout<<num<<'\n';
    }
  
    return 0;
}