// this is another function used for vectors,
// this is very SOMEWHAT similar to the partition function in the quick-sort algorithm, but there is a small difference.

// so suppose if there is an vector/array . so we tell the function some index.
// so we will find the actual value to be in that index, when the vector/array is sorted.

// example: array->{ 3, 2, 10, 45, 33, 56, 23, 47 }, we tell then index as 3. what it means that when the array is sorted,
// what value will come in that index.
// ans: 3, 2, 10, [23], 45, 33, 56, 47. --> so the index we specfied is 3. so in the actual sorted array the index 3 will be occupied by 23.
// and the left to that index, will contain all value less than or equal to that. and right contains all value which is greater then that index value.

// but it is not neccessary for the array to be sorted, we just find that index correct value when the array is sorted. (actual position)
// and all the values to its left are smaller or equal, and all the values to the right are greater. (MUST)
// so it is SOMEWHAT the same as partition function in QUICKSORT-algo. but not same to be specificy

// three parameters,
// 1.) start index of the vector.
// 2.) nth index of the vector, --> the index for which u want to find the value.
// 3.) end index of the vector.

// return type nothing,
// and all the values to the left will be smaller, but it may not be sorted, and will some random order based on the algo used, similarly for right

#include<iostream>
#include<vector>
#include<algorithm>

template<typename T>

void display(std::vector<T> v){
    for(T vals: v){
        std::cout<<vals<<" ";
    }
    std::cout<<std::endl;
}

int main_1(){
    int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 }, i;
    std::vector<int> vect(v, v+(sizeof(v)/sizeof(v[0])));
    std::nth_element(vect.begin(),vect.begin(),vect.end());
    // find the value for the index 0
    display(vect);
    std::nth_element(vect.begin(),vect.end()-1,vect.end());
    display(vect);
    return 0;
}

// lets use some user-defined function.

// 4th parameter:
// omp: Binary function that accepts two elements in the range as arguments, and returns a value convertible to bool. 
// The value returned indicates whether the element passed as the first argument is considered to go before the second in 
// the specific strict weak ordering it defines. The function shall not modify any of its arguments.
// This can either be a function pointer or a function object.

int main_2()
{
	int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 }, i;
	// Using std::nth_element with n as 2
	std::nth_element(v, v + 1, v + 8, std::greater<int>());
    // w.k.t that when the array is sorted at the index 1 "47" will come.
	for (i = 0; i < sizeof(v)/sizeof(int); ++i) {
		std::cout << v[i] << " ";
	}
	return 0;
}

// lets see how to find the median of vector, for odd no. of elements.
// generally what we will do is we sort the array, and then find the middle-element value.
// TIME_CONSUMING so we can use this nth_element function to find the median.

int main(){
    int v[] = { 3, 2, 10, 45, 33, 56, 23, 47, 10, 10 };
    std::vector<int> vect;
    vect.assign(v, v+(sizeof(v)/sizeof(int)));
    std::nth_element(vect.begin(),vect.begin()+(vect.size()/2),vect.end());
    std::cout<<"The median of the vector:"<<vect[vect.size()/2];
    return 0;
}

// so like this many application is there,
// one such aplication is suppose if they ask to find the kth smallest element in O(N) space, so this is best.
// because we generally do sorting and find --> which is o(nlogn) --. but this takes only o(n) .