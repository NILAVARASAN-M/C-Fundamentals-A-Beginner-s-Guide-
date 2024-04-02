#include <iostream>
#include <limits>

int main() {
    // Get information about the properties of the int type
    std::cout << "Properties of int type:" << std::endl;
    std::cout << "Maximum value: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Is signed: " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "Is exact: " << std::numeric_limits<int>::is_exact << std::endl;
    std::cout << "Digits: " << std::numeric_limits<int>::digits << std::endl;
    std::cout << "Digits10: " << std::numeric_limits<int>::digits10 << std::endl;
    std::cout << "Is integer: " << std::numeric_limits<int>::is_integer << std::endl;

    // Get information about the properties of the double type
    std::cout << "\nProperties of double type:" << std::endl;
    std::cout << "Minimum value: " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "Maximum value: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Is signed: " << std::numeric_limits<double>::is_signed << std::endl;
    std::cout << "Is exact: " << std::numeric_limits<double>::is_exact << std::endl;
    std::cout << "Digits: " << std::numeric_limits<double>::digits << std::endl;
    std::cout << "Digits10: " << std::numeric_limits<double>::digits10 << std::endl;
    std::cout << "Is integer: " << std::numeric_limits<double>::is_integer << std::endl;

    return 0;
}
