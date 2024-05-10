// suppose a initial we declare a vect with size 5 then means capacity will also be 5, later u add a element to the vector.
// now the capacity will become 10, and next 20, 40, 80,.... suppose if there are 41 elemeents in the vector, then the size will 41, 
// but the capacity that has been allocated will now be 80 (for dynamic purpose), so 39 values are empty and so storage is wasted.
// to reduce extra space we use shrink_to_fit() function, so when u call upon this function, now this elements will copied to another space
// in memory, and the previous space will as allocated with 80 capacity will be deleted. and  now in the location the capacity
// will be same as the size of the vector.

// Parameters: The function does not accept any parameters. 
//Return value: The function does not returns anything. 

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec(100, 1);
    std::cout << "Original capacity: " << vec.capacity() << std::endl;

    vec.resize(40); // Reduce the size of the vector to 50
    std::cout << "Capacity after resize: " << vec.capacity() << std::endl;

    vec.shrink_to_fit(); // Request to reduce the capacity to fit the size
    std::cout << "Capacity after shrink_to_fit: " << vec.capacity() << std::endl;
    return 0;
}

// this shrink_to_fir() function is ----> a non-binding function.
// By making shrink_to_fit non-binding, the C++ standard allows library implementations to balance the request to 
// reduce memory usage with the potential performance implications of doing so. For example, an implementation might
// choose to ignore the request if it determines that the performance cost of reallocating memory outweighs the
// benefits of reducing the container's capacity.

