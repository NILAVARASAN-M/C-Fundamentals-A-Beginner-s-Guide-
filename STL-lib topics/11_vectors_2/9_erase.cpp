// erase is used remove an element in the specified location(iterator), or it can be used to remove a range of elements
// Position of the element to be removed in the form of an iterator.
// The range is specified using start and end iterators.
#include<iostream>
#include<vector>
#include <algorithm> // for std::find
#include<string>
#include<utility>

void display(std::vector<int> v){
    for(int items: v){
        std::cout<<items<<" ";
    }
    std::cout<<std::endl;
    return;
}

// 1.) Removing an element from a particular position
int main_1(){
    std::vector<int> vect{1,2,2,3,4,5};
    vect.erase(vect.begin()+1);
    vect.erase(vect.begin());
    display(vect);
    return 0;
}

// 2.) Removing a particular element

// To delete a particular element based on its value, first, we need 
// to know about its position and we can find it using the find() function

int main_2(){
    std::vector<int> vect{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int find_value=13; // this is the value that we are going to remove, so we have find its location.
    auto itr_loc=std::find(vect.begin(), vect.end(), find_value); // this will give the location.
    vect.erase(itr_loc);
    display(vect);

    // suppose if the value we are finding is not in the vector, then ??
    // so the find(), then it will return the last iteartor, it will return vect.end();
    find_value=122;
    itr_loc=std::find(vect.begin(), vect.end(), find_value);
    if(itr_loc!=vect.end()){
        vect.erase(itr_loc);
    }
    // if dont give this if-condition then will lead to segmentaion error, so be carefull while doing this. b/c there is element withat value,
    // so will return vect.end() iterator.
    display(vect);
    return 0;
}

// 3.) Removing vector pair elements

void print(std::vector<std::pair<int, std::string> >& vec)
{
    std::cout << "[";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << "{" << vec[i].first << "," << vec[i].second
             << "}";
        if (i < vec.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main(){
    std::vector<std::pair<int, std::string>> vect{{1, "A"}, {2, "B"}, {3, "C"}, {4, "D"}, {5, "D"}};
    vect.erase(vect.begin());
    print(vect);
    vect.erase(vect.begin()+1,vect.begin()+2);
    print(vect);

    vect.clear();
    print(vect);
    return 0;
}