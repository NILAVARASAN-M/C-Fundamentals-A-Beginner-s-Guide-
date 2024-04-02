// we will see emplace_back() and emplace_front().
// this is also same as the emplace()
// but only one parameter, that is the value u want to insert.
// emplace_back() --> will insert the value at the end of the vector.
// emplace_front() --> will insert the value at the front of the vector.

// both the functions will emplace_back(), emplace_front() not return anything, but emplace() function will return.


#include<iostream>
#include<vector>
#include<string>
int main(){
    std::vector<std::pair<std::string, int>> vect;
    vect.emplace_back(std::make_pair("Nila", 10));
    vect.emplace_back("Va", 20);

    // vect.push_back("Ra",30);  ---> this line will throw error because, the push_back function except an single value, but two.
    // push_back(), there is no overload defined for this case, so ereor. but emplace there is an overload-defined, so no errors.
    vect.push_back(std::make_pair("San", 30));
    for(std::pair<std::string, int> val: vect){
        std::cout<<val.first<<" "<<val.second<<"\n";
    }
}

/*
emplace_back() vs push_back()

push_back() copies a string into a vector. First, a new string object will be implicitly created initialized 
with provided char*. Then push_back will be called which will copy this string into the vector using the move 
constructor because the original string is a temporary object. Then the temporary object will be destroyed.

emplace_back() constructs a string in-place, so no temporary string will be created but rather emplace_back()
 will be called directly with char* argument. It will then create a string to be stored in the vector initialized
 with this char*. So, in this case, we avoid constructing and destroying an unnecessary temporary string object.
*/