#include<iostream>
#include<map>
#include<string>

int main() {

    std::map<std::string , int> map1;

    map1 = { {"A" , 21}, {"B" , 24}, {"C" , 30}

    };

    

    map1["D"] = 34;

    map1.insert({"E", 38});

    for (const auto& x : map1) {

        std::cout<< "Key = " << x.first << "   Value = "<< x.second<<'\n';
    }


    return 0;
}