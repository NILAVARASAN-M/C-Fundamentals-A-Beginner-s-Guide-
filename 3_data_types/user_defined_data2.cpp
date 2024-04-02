#include <iostream>
#include <cstring>
using namespace std;

union Data {
    int intValue;
    double doubleValue;
    char stringValue[20];
};

int main() {
    Data data;
    data.intValue = 10;
    cout << "Integer value: " << data.intValue << endl;

    data.doubleValue = 3.14;
    cout << "Double value: " << data.doubleValue << endl;

    strcpy(data.stringValue, "Hello");
    cout << "String value: " << data.stringValue << endl;

    return 0;
}
// this union is used for saving memory, the memory will have a fixed size by taking the size as atleast the largest value declared in the 
// union Data, so in this case doubleValue which is of size 8.
// so the size is fixed, and change in intValue will affect doubleValue, stringValue and vice-versa,if change any one and print,
// this will show some garbage value b.c the value is of some type, but u are reading in some other type.