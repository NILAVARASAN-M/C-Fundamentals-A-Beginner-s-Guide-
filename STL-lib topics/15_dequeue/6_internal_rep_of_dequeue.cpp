/*
How Deque Works Internally in C++ STL
An STL deque is implemented using arrays of data or arrays of pointers to memory blocks rather 
than a linked list. Depending on storage requirements, the number of blocks and size of the array 
of pointers fluctuate dynamically. These memory blocks contain items at adjacent locations.

A block of memory is automatically allocated when a deque object is created so that the objects 
can be stored in contiguous locations.

Deque then allocates a new block of memory and joins the front of the prior memory block with 
it when we put an item in front of it. Now, if we add pieces to the front once more, they will be
stored in this new memory block until it is entirely full.

When an item is inserted at the end of a deque, the allocated block of memory holds it until it is
completely filled; if this occurs, a new block of memory is allocated and connected to the end of 
the preceding block. Elements that are added to the deque’s back are now stored in that new memory block.

Since a deque does not need shifting an element by 1 as an array does in a block of memory to make
room at the front, you can think of it as a linked list of vectors. In order to allocate a new block 
of memory to it, it first determines if there is space remaining at the front of the first element in the current block of memory.
*/

//initially we allocate an block of memory, so c++ internally uses array for dequeue, not linked-list.
//genrerally linked-list is the approach for dequeue, but since c++ allows us to perform inserting values at specified range, and we access, or
// get value from any location. so here dequeue we can acess elements randomly also, using [], .at(). 
// similarly removing iterators, in an range. so essentially, since dequeue in c++ can do additional operatina's, therefore 
//  when using linked-list, will result the time-complexity even higher, since we have to seach elements etc.

// so c++ uses array, in an effcient way so that, all operations takes O(1).

// 1.) Initially when we add elements, we create an block of memory for this. Since elements are added continously in the back of dequeue, 
// they are added/ kept in same block. Lets keep this block name as "middle"
// suppose if we add element in front of the dequeue(front of the middle block),
// we cant add since there is aldready some-elemnts in front of the middle-block,
// so we create another block of memory named "front", and we connect this newly created block with the front of aldready 
// available "middle"-block. 
// so the elements that we add in front of the middle-block will get added in the front-block, untill it gets full, if get's full
// then the same process happen.
// if the  intitial middle-block is full, then we make another block-of-memory, we link this new block of  memory, with the end address of middle-
// block of memory.

// and elements are add to it.


// THIS IS HOW INTERNALLY DEQUEUE IS IMPLEMENTED USING ARRAY'S, ALSO MAKING SURE THAT ALL OPERATIONS ARE ALSO ARE OF THE ORDER O(1).


// In vectors, the elements will have gaurenteed continoulsy memory allocation.
// but in dequeue the memory allocation may not be continous.

// vectors VS dequeue.

/* 
VECTOR:
Stores elements contiguously
Its time complexity of insertion in front or in middle is O(N)
Its time complexity of deletion is O(N)

DEQUEUE:
It contains lists of memory chunks where elements are stored contiguously
Its time complexity of insertion in front and end is O(1)
Its time complexity of deletion is O(1)
*/

