// unordered mapping, here we will store the key-value pair.
// this is an associative container, similar to the map in stl.
// here also we have key-value pair, where we can retrieve the value using the key.
// key's must be unique, it is same as the dicitionary in python.

// Eventhough map and unorderedmap look similar, but the internal implmentaion varies. 

// map is implemented using red-brown trees, so whenever we insert an key-value pair. 
// the key will be sorted, and then inserted. If we print the map-structure, we will notice that
// the key's will be in sorted order. Whenever we insert an key, it will automatically place it in sorted-fashion.
// so each time for insertion only o(logN) time will take, since we have to place the key in appropriate place so that the keys,
// will be sorted. w.k.t generally BST takes, O(logN).

// unordered_map is implemeneted using hash_map, 
// the same as we studied in sem-3, so the hash-fn decides the efficienty of the the structure.
// the hash-function converts the key to some integer, type. it should make sure that, the value generated for an particular key should be unique. The hash-value
// generated should be unique. This is made sure by the hash-fn, for the given key, its corresponding hash-value serves as the index of the array.
// in the specified index, there we insert the key, value-pair. 
// suppose if we want to retrieve an value based on key, the same hash-fn will convert the key to index, and from the array index we will
// retrieve the value (return the value stored in that index of the array).

// unordered_map in c++, 
// main aim is to make sure that insertion/ deletion takes only O(1). but some cases it's effciency will range from O(1)-O(N). Depending
// on the hash-fn.
// The key, value can be of any type primitive, user-defined etc. can be of any type.
// keys should be unique. values can be same.

// functions avilable:
/*
at()	This function in C++ unordered_map returns the reference to the value with the element as key k
begin()	Returns an iterator pointing to the first element in the container in the unordered_map container
end()	Returns an iterator pointing to the position past the last element in the container in the unordered_map container
bucket()	Returns the bucket number where the element with the key k is located in the map
bucket_count	Bucket_count is used to count the total no. of buckets in the unordered_map. No parameter is required to pass into this function
bucket_size	Returns the number of elements in each bucket of the unordered_map
count()	Count the number of elements present in an unordered_map with a given key.
equal_range	Return the bounds of a range that includes all the elements in the container with a key that compares equal to k
find()	Returns iterator to the element
empty()	Checks whether the container is empty in the unordered_map container
erase()	Erase elements in the container in the unordered_map container
*/