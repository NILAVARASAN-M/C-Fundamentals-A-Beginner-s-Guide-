#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> vect = {{1, 2, 3}, {3, 3, 3}, {4, 5, 6}, {7, 8, 9}};

    // Remove the vector {3, 3, 3} from vect
    vect.erase(std::remove(vect.begin(), vect.end(), std::vector<int>{3, 3, 3}), vect.end());

    // Print the vectors in vect
    for (const auto& v : vect) {
        for (int num : v) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
