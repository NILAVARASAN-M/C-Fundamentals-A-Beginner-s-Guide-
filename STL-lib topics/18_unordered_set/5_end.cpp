#include<bits/stdc++.h>
using namespace std;

// parameter-1: no parameter passed, then will return the last iterator
// pass the last-bucket.
// retuns the last-iterator, in the last-bucket.

int main1(){
    unordered_set<int> sampleSet = 
                { 5, 10, 15, 4, 2, 7, 8, 6 };
    for (auto it = sampleSet.begin(); it != sampleSet.end(); it++) cout << *it << " ";
        return 0; 
}

// parameter-2: integer parameter passed end(int n).
// returns the end-iterator in the nth bucket 
// n is passed as the parameter.

int main() 
{ 
    unordered_set<int> sampleSet = 
                { 5, 10, 15, 4, 2, 7, 8, 6 }; 
 
    // displaying all the buckets of the set. 
    // Continue the loop until it points to the 
    // past-the-end position returned by sampleset.end(i) 
    for (unsigned i = 0; i < sampleSet.bucket_count(); ++i) 
    { 
        cout << "Bucket " << i << " Contains: "; 
        for (auto it1 = sampleSet.begin(i); 
                        it1 != sampleSet.end(i); ++it1) 
            cout << " " << *it1; 
        cout << endl; 
    } 
     
    return 0; 
}