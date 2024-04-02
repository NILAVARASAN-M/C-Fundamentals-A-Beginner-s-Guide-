// u will notice that the max_element when u pass that lambda function, u might have thought one-logic. but the output
// gave by it is differeent, we expected for an max-value, but the ouput is minimum value.


#include<iostream>
#include<vector>
#include<algorithm>


int main_1(){
    std::vector<int> nums = {3, -5, 1, -9, 4, -100, 23, 99, -10000, 23, 3, -1};
    std::cout<<"MAX:"<<
    *(std::max_element(nums.begin(), nums.end(), [](int a, int b){
        std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
        return std::abs(a)>std::abs(b);
    }));    
    return 0;
}

// why the unexpected behaviour, just think in the persepctive of the function working internally.
// so first it will assume that 3 is the largest number.
// NOTE WE WILL BE TAKING ABS VLAUES ONLY>
// max_initial=3;
// 1st itertion : a-> 3, b-> 5. 3>5 -> false. so the max_initail wont change.
// 2nd itertion : a-> 3, b-> 1. 3>1 -> true. so the max_initail will change, now max_initial will be "1".
// 3rd itertion : a-> 1, b-> 9. 1>9 -> false. so the max_initail wont change.
// 4th itertion : a-> 1, b-> 4. 3>5 -> false. so the max_initail wont change.
// 5th itertion : a-> 1, b-> 100. 3>5 -> false. so the max_initail wont change.
// 6th itertion : a-> 1, b-> 23. 3>5 -> false. so the max_initail wont change.
// 7th itertion : a-> 1, b-> 99. 3>5 -> false. so the max_initail wont change.
// 8th itertion : a-> 1, b-> 10000. 3>5 -> false. so the max_initail wont change.
// 9th itertion : a-> 1, b-> 23. 3>5 -> false. so the max_initail wont change.
// 10th itertion : a-> 1, b-> 3. 3>5 -> false. so the max_initail wont change.

// so now u should have understand why it was not working in the desried way you thought.

// so always think in the perspective of how that min, max, sort function work internally.
// sort: if the the lamda fucntion return true it mean, we can swap the two elemets
// min, max: the same min, max function we write think in that perspective.s

// just change the std::abs(a) ">" std::abs(b) this to -> std::abs(a) "<" std::abs(b)
int main_1(){
    std::vector<int> nums = {3, -5, 1, -9, 4, -100, 23, 99, -10000, 23, 3, -1};
    std::cout<<"MAX:"<<
    *(std::max_element(nums.begin(), nums.end(), [](int a, int b){
        std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
        return std::abs(a)>std::abs(b);
    }));    
    return 0;
}
