// to no more about buckets i have dicussed in-depth in the unordered_map, have explained in very detail. see that.

// the buckets are created by that data-structure only.
// all depends on the internal-implementation of that data-strtucture.

// so the keys-whose hash are same are placed in the same-bucket.
// the hash function will generate unique hash-value for unique values. but to limit and store in an array. so only we do (hash_value % N)
// so there can be repeation of same-hash-values for the values, so we store all the same-hash-value mapped in the same bucket. And acces from there.

// here bucket-size.
// parameter: we should pass an integer n, this n is the bucket-number that you want infer about.
// returns: the no of elements stored in that nth bucket passed by as the parameter.

// and bucket-count is different from bucket-size.
// bucket count gives the number of bucket present in set.

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> uset={1,2,3,4,5,6,7,7,8,9};

    // number of buckets for this set.
    cout<<uset.bucket_count()<<endl;

    for(int i=0;i<uset.bucket_count();i++){
        auto itr=uset.begin(i);
        for(int j=0;j<uset.bucket_size(i);j++){
            cout<<*itr<<" ";
            advance(itr, 1);
        }
        cout<<endl;
    }
    return 0;
    // just see the difference between bucket_count() and bucket_size().
}