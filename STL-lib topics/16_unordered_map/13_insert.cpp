// we can insert in three way-s, 
// WAY-1:
// unordered_map_name.insert({key, element})
//Parameters : This function takes two arguments as input parameters. key and its value to be inserted.
// Return type : The function returns an iterator pointing to the new element in the container.

// WAY-2:
// iterator unordered_map_name.insert(iterator position, {key, element})

// This function insert element in unordered_map after at specified position.
// Parameters : The parameters key and elements are same as in function of type 1 but position is 
// from where searching operation is performed for insertion of element into the container.
// Return value The function returns an iterator pointing to the new element in the container.

// WAY-3.
// iterator unordered_map_name.insert(iterator position1, iterator position2)

// Parameters : This function accepts two parameters position1 and position2 which specifies the range all elements between this range are inserted into another container including element at position1 but excluding element at position2.
// Return value The function returns an iterator pointing to the new element in the container..

// combined code for this
#include <iostream>
#include <unordered_map>

int main() {
    // Creating an unordered_map
    std::unordered_map<int, std::string> myMap;

    // Way 1: Using insert({key, value})
    myMap.insert({1, "One"});
    myMap.insert({2, "Two"});
    myMap.insert({3, "Three"});

    // Way 2: Using insert(iterator, {key, value})
    auto it = myMap.find(1); // Finding position to insert
    if (it != myMap.end()) {
        myMap.insert(it, {4, "Four"});
    }

    // Way 3: Using insert(iterator, iterator)
    std::unordered_map<int, std::string> anotherMap = {
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"}
    };
    myMap.insert(anotherMap.begin(), anotherMap.end());
    return 0;
}

// inserting using make_pair.

int main12() {
    std::unordered_map<int, std::string> myMap;

    myMap.insert(std::make_pair(1, "One"));
    myMap.insert(std::make_pair(2, "Two"));
    myMap.insert(std::make_pair(3, "Three"));
}
