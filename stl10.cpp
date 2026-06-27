// Forward List - also known as single link list;

// Modifiers/ Functions in Forward list

// insert_after ; emplace_after ;splice_after
// reverse, sort, merge
// assign, front
// empty , max_size, unique
// clear, remove, remove_if
// resize

#include<iostream>
#include<forward_list>

int main() {


    std::forward_list<int> List1 = {1,2,3};
    std::forward_list<int> List2 = {4,5,6};


    //To insert a value right after the Head;

    List1.insert_after(List1.begin(),67);
    List1.emplace_after(std::next(List1.begin(),1), 69);
   
    List1.splice_after(List1.begin(), List2, List2.before_begin(), List2.end());
    // Just List2.begin() doesn't work cuz splice_after takes first element of the second list. so we need one index before what we want;


    List1.reverse();
    List1.merge(List2);
    List1.sort(); // Sorting Algorithm used by sort is Merge Sort
    List1.unique(); // Removes the duplicates 
    List1.remove(67);
    List1.remove(69);
    List1.clear();
 
    for(auto num : List1) {

        std::cout<<num<<'\n';
    }

    std::cout<< List1.max_size()<<'\n';
    return 0;
}