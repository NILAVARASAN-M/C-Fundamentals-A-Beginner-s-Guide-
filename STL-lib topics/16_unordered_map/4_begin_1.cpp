// the begin function returns the first iterator (the first element pointed in the map) or (suppose if there is an bucket-full of element),
// then return's the first-iterator from that bucket of element's.

// What is bucket in unordered-map,
// suppose if an array is of size 10-only, but u want to store 100 pairs'svalues.
// we will declare an array of linked-list, were the the keys who's hash-value's(same index) are same are placed in same bucket.
// we cannot insert 100-values, in an array of size 10. so surely there will be occurence of same hash-value, for the UNIQUE-key's.
// The key's with the same hash-value(same index), are placed in same index-of the array, were it is linked with linked-list/ or vectors.

// bucket: the key's with the same hash-value *****(not same hash-value exatly since no two key's can have the same-hash value, after theu key generated
// the range can be 0-2^32 and more, but to get the index in an array, we use modulo by hash_value%size_of_array this will return an valid index
// in the array, as told so now there can be many same index-given for different key's)****
// key's with the same hash-value are refered as bucket. and all the key's with same hash(same index) are placed in same bucket.
// the pair is placed in bucket, pair to find the key. 
// since there will be many key's in bucket, suppose if we have stored an pair, but we wnt to acces the value using an key. 
// we cant soley find the key, only with hash. since in that bucket there will be many key-value pair's.
// so we will store not the value, but they also, so that in feature when u want to acces we can find with the help of key.


// so hash_function-will reduce the time-complexity to some extent,---->  using hash-we can find the array-index only.
// in that array-index(bucket) we can find that there will be many key-value-pair, so  we have to traverse the the list to find the 
// key's value  --> by using the pair, since the pair will be stored in the nodes of the linked-list.
// we will traverse, accros the linked-list were the first element in the pair is key, if anything matches then we return the second element
// since it will be the value of that key.

/*
In the context of `std::unordered_map` in C++, a **bucket** refers to one of the internal containers used to store key-value pairs. `std::unordered_map` is implemented as an array of linked lists (or another type of container, such as a vector) called buckets. Each bucket holds a group of elements with the same hash value or, in other words, elements that map to the same bucket index.

When you insert a key-value pair into an `unordered_map`, its hash value is computed, and the pair is placed into the corresponding bucket. This organization allows for constant-time average complexity for operations like insertion, deletion, and search if the hash function is well-distributed and there are few collisions.

The number of buckets is determined by the size of the `unordered_map` and can be accessed using the `bucket_count()` member function. You can also access the elements within a specific bucket using the `begin(n)` and `end(n)` member functions, where `n` is the index of the bucket.

Here's a simple visualization of how an `unordered_map` might be structured internally:

```
  0       1       2       3       4      ...  n-1
-----------------------------------------------
|  | -> |  | -> |  | -> |  | -> |  | ->  ... |  |    Bucket 0
-----------------------------------------------
|  | -> |  | -> |  | -> |  | -> |  | ->  ... |  |    Bucket 1
-----------------------------------------------
|  | -> |  | -> |  | -> |  | -> |  | ->  ... |  |    Bucket 2
-----------------------------------------------
|  | -> |  | -> |  | -> |  | -> |  | ->  ... |  |    Bucket 3
-----------------------------------------------
|  | -> |  | -> |  | -> |  | -> |  | ->  ... |  |    Bucket 4
-----------------------------------------------
|  | -> |  | -> |  | -> |  | -> |  | ->  ... |  |    ...
-----------------------------------------------
|  | -> |  | -> |  | -> |  | -> |  | ->  ... |  |    Bucket n-1
-----------------------------------------------
```

Each box represents a bucket, and the arrows represent the linked list (or other data structure) that holds the elements within each bucket. When you insert a key-value pair into the `unordered_map`, it gets placed into the appropriate bucket based on the hash of the key. If there are multiple elements with the same hash (i.e., they hash to the same bucket index), they are typically stored in a linked list or another container within that bucket.
*/