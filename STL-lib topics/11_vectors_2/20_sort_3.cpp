#include <algorithm>
#include <iostream>
using namespace std;

template <class T>
class Comparator { // we pass an object of this class as
				// third arg to sort function...
public:
	bool operator()(T x1, T x2)
	{
		return x1 < x2;
	}
};

template <class T> bool funComparator(T x1, T x2)
{ // return type is bool
	return x1 <= x2;
}

int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int asize = sizeof(a) / sizeof(int);
	sort(a, a + asize);  // default
	sort(a, a + asize, greater<int>()); // for sorting in desc-order
	sort(a, a + asize, Comparator<int>()); 
	sort(a, a + asize, funComparator<int>);
	return 0;
}

// how they work internally -------------->
/*
When you use a key with `std::sort`, whether it's a lambda function, function pointer, or functor, 
it works in a similar way internally. Here's how it works:

1. **Selection of Elements**: First, `std::sort` selects two elements from the sequence to compare.
 It uses these elements as arguments to the comparison function or functor provided as the key.

2. **Comparison**: The key function compares the two selected elements and returns `true` if the first
 element should come before the second one in the sorted order, and `false` otherwise.

3. **Sorting Algorithm**: Based on the result of the comparison, `std::sort` rearranges the elements 
in the sequence. It swaps elements if necessary to ensure that elements satisfying the comparison condition 
come before those that do not.

4. **Repeating the Process**: `std::sort` repeats this process until all elements in the sequence are
 sorted according to the specified criteria.

5. **Stable Sorting**: In the case of equal elements (i.e., elements for which the key function returns `false`), 
`std::sort` maintains the relative order of these elements as they appeared in the original sequence. This property 
is called stable sorting.

6. **Efficiency**: `std::sort` uses an efficient sorting algorithm, typically an implementation of introsort
 or Timsort, to perform the sorting operation. These algorithms have a time complexity of O(n log n) on average.

Overall, the key function provided to `std::sort` is responsible for defining the sorting criteria, 
and `std::sort` uses this criteria to rearrange the elements in the sequence accordingly. This allows 
you to customize the sorting process based on your specific requirements.
*/


