// the seaarch function searches for the seubsequence in the two data-type(vectors, arrays, lists, dequeue).
// lets take vector-1, [first-last]=[vector-1.begin(), vector()-2,end()].
// lets take vecctor-2, [subseq_first, subseq_last]=[vector-2.begin(), vector-2.end()].
// so we will serch for this range of sequence in the [subseq_first, subseq_last] in the vector-1.
// if found will return the starting iterator, if not found then returns the last iterator --> the end iterator vector-1.end() it returns.
// this search fnction works for strings also.

#include<vector>
#include<algorithm>
#include<iostream>
#include<string>

// 1. searching for an sub-seq, in two strings.
int main_1(){
    std::string name1="Hello World!";
    std::string name2="World";
    auto itr=std::search(name1.begin(), name1.end(), name2.begin(), name2.end());
    std::cout<<*itr;
    // the search function returns an iterator for strings.
    if(itr!=name1.end()){
        std::cout<<"The INDEX is: "<<itr-name1.begin()<<std::endl;
        std::cout<<"The INDEX is: "<<std::distance(name1.begin(), itr)<<std::endl;
    }
    else{
        std::cout<<"Sequence not found";
    }
    return 0;
}

// 2. searching in vector(mainSeq) and another vector(sebSeq)
int main_2(){
    std::vector<int> vect1={1,2,3,4,5,6,7,8,9,10};
    std::vector<int> vect2={8,9,10};
    std::vector<int> vect3={2,3,4,10};
    auto itr1=std::search(vect1.begin(), vect1.end(), vect2.begin(), vect2.end());
    auto itr2=std::search(vect1.begin(), vect1.end(), vect3.begin(), vect3.end());
    std::cout<<"INDEX: "<<itr1-vect1.begin();
    std::cout<<"INDEX: "<<itr2-vect1.begin();
    return 0;    
}
// 3. searching in arrays(mainSeq) and another arrays(sebSeq)
int main_3(){
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int arr2[]={8,9,10};
    int arr3[]={2,3,4,10};
    auto itr1=std::search(arr1, arr1+(sizeof(arr1)/sizeof(arr1[0])), arr2, arr2+(sizeof(arr2)/sizeof(arr2[0])));
    auto itr2=std::search(arr1, arr1+(sizeof(arr1)/sizeof(arr1[0])), arr3, arr3+(sizeof(arr3)/sizeof(arr3[0])));
    std::cout<<"INDEX: "<<itr1-arr1<<std::endl;
    std::cout<<"INDEX: "<<itr2-arr1;
    return 0;    
}

// 4.) vectors of pairs.
int main_4(){
    std::vector<std::pair<int, char>> vec = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
    std::vector<std::pair<int, char>> subVec = {{2, 'b'}, {3, 'c'}};

auto it = std::search(vec.begin(), vec.end(), subVec.begin(), subVec.end(),
    [](const std::pair<int, char>& a, const std::pair<int, char>& b) {
        return a.first == b.first && a.second == b.second;
    });

    // the lambda function is not neccesariy in this case, the default key will also do the same operation, 
    // just see some similar case where we can use to search for the equence with the first element of key only.
    std::vector<std::pair<int, char>> subVec2 = {{1, 'b'}, {2, 'c'}};
    auto itr2=std::search(vec.begin(), vec.end(), subVec2.begin(), subVec2.end(), 
    [](std::pair<int, char> a, std::pair<int, char> b ){
        return a.first==b.first;
    });

if(it != vec.end()) {
    std::cout << "Subsequence found starting at position " << std::distance(vec.begin(), it) << std::endl;
} else {
    std::cout << "Subsequence not found." << std::endl;
}

if(itr2 != vec.end()) {
    std::cout << "Subsequence found starting at position " << std::distance(vec.begin(), itr2) << std::endl;
} else {
    std::cout << "Subsequence not found." << std::endl;
}
return 0;
}

// 5. searching in arrays(mainSeq) and another Vectors(sebSeq)
int main_5(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    std::vector<int> vect={8,9,10};
    auto itr=std::search(arr, arr+(sizeof(arr)/sizeof(arr[0])), vect.begin(), vect.end());
    std::cout<<"INDEX: "<<(itr-arr);
    return 0;
}

int main_6(){
    int mainSequence[] = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> subSequence = {3, 4, 5};
    auto it = std::search(std::begin(mainSequence), std::end(mainSequence), subSequence.begin(), subSequence.end());
    if (it != std::end(mainSequence)) {
    std::cout << "Subsequence found starting at position " << std::distance(std::begin(mainSequence), it) << std::endl;
    } 
    else {
    std::cout << "Subsequence not found." << std::endl;
    }
    return 0;
}
// here returns an iterator --> std::begin(mainSequence), std::end(mainSequence), since these are arrays.
// which we want pointers, but suppose u want as an iteartor can be used it like above case.
// this will make the code more generic.

// a little more about converting arrays to iterators.

int main(){
    int mainSequence[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // Iterate over the mainSequence in reverse order
    for (auto rit = std::rbegin(mainSequence); rit != std::rend(mainSequence); ++rit) {
    std::cout << *rit << " ";
    }
    return 0;
}