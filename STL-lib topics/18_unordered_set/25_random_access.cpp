// unlike maps we cant access the elements in set using [].
// also suppose if itr=uset.begin();, itr+4 --> incermenting by an offset is not possible.
// increment possible(here we incr by one <--possible).
// but by an offset is not possible.

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> uset;
    // cout<<uset[10]; <-- compiler error: because no []
    auto itr=uset.begin();
    itr++;
    // itr--; Not possible
    // itr+3;
    
    // for dec we can use like this 
    // way-1
    auto itr=prev(itr);
    //way-2
    advance(itr, -1); // itr will de decrmeneted, and will not return anything.

    // increasing/decreasing by an offset.
    advance(itr, 4);
    advance(itr, -10);
}

// why we cant decrement/ increase by an ofset in set??
/*
In C++, containers like `std::unordered_set` do not provide direct access to elements by index because they do not guarantee a particular order of elements. As a result, iterators for these containers do not support arithmetic operations like addition or subtraction with integral values (increasing or decreasing by an offset) because the concept of "next" or "previous" elements in the set is not well-defined.

Here's why:

1. **Unordered nature**: The elements in an `unordered_set` are not stored in a specific order based on their values. Instead, they are stored based on their hash values to achieve constant-time average complexity for lookup, insertion, and deletion operations. This means there's no sequential ordering of elements, so it doesn't make sense to increment or decrement iterators in a way that assumes a linear sequence.

2. **Hash table implementation**: Under the hood, `unordered_set` typically uses a hash table implementation. Iterators in a hash table may not be implemented as simple pointers or indices to elements. Instead, they might encapsulate complex logic to navigate the buckets and elements within the hash table, making arithmetic operations less straightforward or meaningful.

3. **Complexity guarantees**: Incrementing or decrementing an iterator by an offset would potentially violate the constant-time complexity guarantees of hash-based containers like `std::unordered_set`. These containers are optimized for constant-time operations like insertion, deletion, and lookup based on their hash values. Iterating through elements sequentially would require linear-time complexity, which would defeat the purpose of using a hash-based container.

While you can't directly increment or decrement iterators with integral values, you can use other methods like `std::advance()` or `std::next()` and `std::prev()` to move iterators forward or backward by a specified number of positions. These functions handle the complexities of iterator traversal in a way that respects the container's underlying data structure and complexity guarantees.
*/

// it is due to how they are implemented internally, is why not possible.