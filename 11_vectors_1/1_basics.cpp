// this vector is similar to the arraylist in java.

// it is the dynamic allocation of memory, and the size can also vary dynamically, we can insert and delete an index in the vector
// dynamically, most of the time limearly.
// Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the 
// middle is linear in time. ---> in all this case the vector takes only linear time or constant time.
// suppose ur inserting an element but there is no enogh space then, we will copy all the elements to another location,
// and then insert.

// Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is 
// inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed 
// in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. 
// Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes 
// only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

/*
In the context of vectors in programming, such as in languages like C++ or Java, a vector is a dynamic array that can resize itself automatically when necessary. 
When you insert an element at the end of a vector, there are a few scenarios to consider:

1. **Space Available**: If there's enough space in the underlying array to accommodate the new element, the insertion operation 
can be done efficiently in constant time O(1). This is because the vector simply adds the new element to the end of the existing array 
without needing to reallocate memory or move existing elements.

2. **Capacity Exceeded**: If the vector's underlying array is already full, inserting a new element at the end may require resizing the
array to make room for the new element. This typically involves allocating a new, larger array, copying the existing elements into it,
and then inserting the new element. This operation takes linear time O(n), where n is the number of elements in the vector.

The average time complexity for inserting an element at the end of a vector takes into account both scenarios.
If we assume that the vector's capacity is managed in a way that resizing occurs infrequently, the average time complexity
 for inserting an element at the end is amortized constant time O(1). This means that on average, inserting an element at the
end of a vector is fast and doesn't depend on the number of elements already in the vector. However, occasionally, when the vector
 needs to resize, it may take longer due to the copying of elements.

It's important to note that vectors provide the benefit of constant-time random access to elements, unlike linked lists, 
which have constant-time insertion at the beginning but linear-time access to elements. Therefore, vectors are often preferred 
when frequent access to elements by index is required, even if insertion at the end may occasionally take longer due to resizing.
*/