// to avoid all this we can do like this, below as shown like that

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int x;
    cout << "Enter a number: ";
    getline(cin, input);
    x = stoi(input); // Convert string to integer
    cout << "You entered: " << x << endl;
    return 0;
}

// one question will arise is that we are passing different input types to the getline how??
// this is overload since we studied in java, that infine functions possible jus the parameters are changed, same here.
// so the value wriiten in terminal will be put to the input string,