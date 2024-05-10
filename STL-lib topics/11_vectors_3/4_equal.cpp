// equal() fucntion

// it takes three parameter, assume two vectors, vect1, vect2.
// 1st parameter: vect1.begin()
// 2nd parameter: vect1.end()
// 3rd parameter: vect2.begin()
// 4th parameter: optional (predicate, binary(takes two paramters)predicate)

// retuns, bool value.

// lets see how the output is produced for various scenarios.
// we will keep ptr1, ptr2 at the vector1, vector2. and we check the value at ptr1 and ptr2, if equal move forwrd (ptr1++&ptr2), 
// else will return false
// 1.) if any element is not same, then directly returns FALSE.
// 2.) if both the vectors, are equal and the elements are equal, then TRUE.
// 3.) if len(vect1)>len(vect2), then also checks untill the end of smallest length vector, if the elements are equal then TRUE.
// 4.) if len(vect2)>len(vect1), then the same as above, will return TRUE.

#include<iostream>
#include<vector>

int main_1(){
    std::vector<int> vect1;
    std::vector<int> vect2;
    // case-1) 
    vect1={1,2,4,3,5,6};
    vect2={1,2,3,4,5,6};
    std::equal(vect1.begin(), vect1.end(), vect2.begin())?(std::cout<<"EQUAL\n"):(std::cout<<("FALSE\n"));
    // case-2)
    vect1={1,2,3,4,5,6};
    vect2={1,2,3,4,5,6};
    std::equal(vect1.begin(), vect1.end(), vect2.begin())?(std::cout<<"EQUAL\n"):(std::cout<<("FALSE\n"));
    // case-3)
    vect1={1,2,3,4,5,6};
    vect2={1,2,3};
    std::equal(vect1.begin(), vect1.end(), vect2.begin())?(std::cout<<"EQUAL\n"):(std::cout<<("FALSE\n"));
    // case-4)
    vect1={1,2,3};
    vect2={1,2,3,4,5,6};
    std::equal(vect1.begin(), vect1.end(), vect2.begin())?(std::cout<<"EQUAL\n"):(std::cout<<("FALSE\n"));
    return 0;
}

// using predicate.

// use of bool equal (InputIterator1 first1, InputIterator1 last1,
// InputIterator2 first2, BinaryPredicate pred);

int main()
{
	int v1[] = { 10, 20, 30, 40, 50 };
	std::vector<int> vector_1 (v1, v1 + sizeof(v1) / sizeof(int) );
	if ( std::equal (vector_1.begin(), vector_1.end(), v1, [](int x, int y){
        return x!=y;
    }) )
		std::cout << "The contents of both sequences are equal.\n";
	else
		printf("The contents of both sequences differ.");

}
