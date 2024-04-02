// lets see how to find the min-max element in an vector.
// min_element() --> for find the minimum number in an vector. ---> returns the minimimum valued, iterator.
// max_element() --> for find the minimum number in an vector. ---> returns the maximum valued, iterator.
// minmax_element() --> for find the minimum number in an vector. --> return the min, max  value as stl library pair.
// pair.first will be min, pair.second will be max.

// paramters are the range of the vector. and the third parameter is the predicate which is optional,
// if needed u can give anf function, template function, lambda function etc.

#include<iostream>
#include<vector>
#include<algorithm>

// without using predicate, find the regular min and max values.
int main_1(){
    std::vector<int> nums = {3, -5, 1, -9, 4, -100, 23, 99, -10000, 23, 3, -1};
    // find the regular min_element()& max_element() functions.
    std::cout<<"MIN: "<<*(std::min_element(nums.begin(), nums.end()))<<" ,MAX:"<<*(std::max_element(nums.begin(), nums.end()))<<"\n";
    // using min_max_elment() funcion.
    auto itr=std::minmax_element(nums.begin(), nums.end());
    std::cout<<"MIN: "<<*(itr).first<<", MAX:"<<*(itr).second;
    return 0;
}

//  using predicate, find the absolute/ scalar min and max values.
int main(){
    std::vector<int> nums = {3, -5, 1, -9, 4, -100, 23, 99, -10000, 23, 3, -1};
    std::cout<<"MIN: "<<
    *(std::min_element(nums.begin(), nums.end(),[](int a, int b){
        return std::abs(a)<std::abs(b);
    }))
    <<" ,MAX:"<<
    *(std::max_element(nums.begin(), nums.end(), [](int a, int b){
        return std::abs(a)>std::abs(b);
    }))
    <<"\n";
    // using min_max_elment() funcion.
    auto itr=std::minmax_element(nums.begin(), nums.end());
    std::cout<<"MIN: "<<*(itr).first<<", MAX:"<<*(itr).second;
    return 0;
}