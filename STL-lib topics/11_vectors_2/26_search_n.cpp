// the search_n function for vector/ arrays/ lists etc. 
// we have to pass four(4) parameters for this,
// 1.) 1st parameter is the start index/iterator/pointer of array/vector, 
// 2.) 2nd parameter is the end index/iterator/pointer of array/vector, 
// 3.) 3rd parameter is the number of occurence of the parameter (count)
// 4.) is an value that we want to search it can only be int, char, float, double, string --> and similiar types etc. no vector etc are allowed.
// all the above 4-prameters are must, but suppose u want to pass an predicate, key, u can pass.(OPTINAL)

// returns the first occurence if found, else returns the vect.end()

// ROLE: lets see how this search_n function works, in the specified vector range it searches for the consecutive occurence
// of the 'value' atleast the 'count' times. If occurs True, else false. so have to occur CONSECUTIVELY.


#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

int main1(){
    std::vector<int> vect={1, 2, 3, 4, 4, 4, 7, 8, 9};
    auto itr=std::search_n(vect.begin(), vect.end(), 2, 4);
    if (itr != vect.end()) {
        std::cout << "Found three consecutive 4s starting at position " << std::distance(vect.begin(), itr) << std::endl;
    } 
    return 0;
}
// here 4 consecutively 2-times -> TRUE

int main_2(){
    std::vector<int> vect={1, 2, 3, 4, 4, 4, 7, 8, 9};
    auto itr=std::search_n(vect.begin(), vect.end(), 4, 4);
    if (itr != vect.end()) {
        std::cout << "Found three consecutive 4s starting at position " << std::distance(vect.begin(), itr) << std::endl;
    } 
    return 0;
}
// here 4 has not ocuured consecutively 4 times -> FALSE

int main_3(){
    std::vector<std::string> texts = {"hello", "world", "world", "world", "end"};
    // Search for 3 consecutive "world"s.
    auto itr = std::search_n(texts.begin(), texts.end(), 3, "world");
    if (itr != texts.end()) {
        std::cout << "Found three consecutive 4s starting at position " << std::distance(texts.begin(), itr) << std::endl;
    } 
    return 0;
}
// here three consecutive "World" found so --> TRUE

// passing an predicate, key.
bool isEqual(int elem, int value) {
    return elem != value;
}
int main() {
    std::vector<int> data = {1, 2, 3, 4, 4, 4, 7, 8, 9};

    // Search for three consecutive '4's using a custom predicate.
    auto it = std::search_n(data.begin(), data.end(), 3, 4, isEqual);

    if (it != data.end()) {
        std::cout << "Found three consecutive 4s starting at position " << std::distance(data.begin(), it) << std::endl;
    } else {
        std::cout << "Subsequence not found." << std::endl;
    }
    return 0;
}
// here we are telling find the three consecutive integers, where it is not four. --> TRUE.