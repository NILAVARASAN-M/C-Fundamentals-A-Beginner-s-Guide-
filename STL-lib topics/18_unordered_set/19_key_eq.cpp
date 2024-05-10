// key_eq, this function is used to check if two key are different.
// Yes we know that two different keys are always different, then what is the purpose of checking if two keys are same???
// sifferent key will have always unique hash-values.
// the number  will be from 0 to 2^32-1 (for unsigned integer). we know that we cant create that much buckets for all elements.
// so we restrict the size like an array of size 100, but we can store 1000 values also. collision will occur.

// so which means that two different keys can have same index value in array.
// this key_equal function checks for this.
// can be used to see if two different key will undergo collision or not??.

#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> myset = {1, 2, 3, 4, 5};

    // Retrieve the key equality function
    auto key_equal_fn = myset.key_eq();

    // Use the function to compare keys
    bool isEqual = key_equal_fn(2, 2); // Should return true
    bool isNotEqual = key_equal_fn(2, 3); // Should return false

    std::cout << "Is 2 equal to 2? " << (isEqual ? "Yes" : "No") << std::endl;
    std::cout << "Is 2 equal to 3? " << (isNotEqual ? "Yes" : "No") << std::endl;

    return 0;
}
