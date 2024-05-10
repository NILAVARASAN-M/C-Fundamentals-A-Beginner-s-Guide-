// we can pass the parameters to the erase function of unordered_set in three way's.

// Method(1): unordered_set_name.erase(iterator start, iterator end)
// Method(2): unordered_set_name.erase(iterator position)
// Method(3): unordered_set_name.erase(element)

// method 1 erase that value in that iterator(element).
// method 2 erases the range of elements from start to end.
// method 3 erases that value->, each element in set is unique, so erase deletes
// that value alone from the set.

// Return Value: 

// This function returns an iterator pointing to the element following the last
// element which is erased in case of first two syntaxes. 
// In case of the third syntax, it returns 0 if the element is not present in the unordered_set 
// else it returns 1 after erasing the element. 


// CPP program to illustrate the
// unordered_set::erase() function
 
#include <iostream>
#include <string>
#include <unordered_set>
 
using namespace std;
 
int main()
{
 
    unordered_set<string> sampleSet = { "geeks1", "for", "geeks2" };
 
    // erases a particular element
    sampleSet.erase("geeks1");
 
    // displaying the set after removal
    cout << "Elements: ";
    for (auto it = sampleSet.begin(); it != sampleSet.end(); it++) {
        cout << *it << " ";
    }
 
    sampleSet.insert("geeks1");
    // erases from where for is
    sampleSet.erase(sampleSet.find("for"), sampleSet.end());
 
    // displaying the set after removal
    cout << "\nAfter second removal set : ";
    for (auto it = sampleSet.begin(); it != sampleSet.end(); it++) {
        cout << *it << " ";
    }
 
    return 0;
}