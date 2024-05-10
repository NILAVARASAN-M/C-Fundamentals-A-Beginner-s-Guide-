// this function is used to take an parameter int n.
// for an given set there are some-containers allocated lets say the count is int m.
// if n>m, then the re_hash function is called and that much bucket is allocated else.
// if m>=n, then the re_hash function has no impact. so re-hashing happens.
#include<bits/stdc++.h>
using namespace std;
// m--> is the number of buckets allocated for an set.
// n--> is the number of buckets that we wish to allocated


// case-1 n>m
int main1(){
    unordered_set<int> uset;
    uset.emplace(1);
    uset.emplace(2);
    uset.emplace(3);
    uset.emplace(4);
    uset.emplace(5);
    uset.emplace(6);

    cout<<uset.bucket_count()<<endl;
    // rehashing
    uset.rehash(20);
    cout<<uset.bucket_count()<<endl;
    return 0;
}

// we want the size as 20, we gave the input-parameter as 20. but we got 23??. 
// this is prime-number rule of hash-tables. So only we got the next-prime-number of 20 --> 23.

// case- m>=n
int main(){
    unordered_set<int> uset;
    uset.emplace(1);
    uset.emplace(2);
    uset.emplace(3);
    uset.emplace(4);
    uset.emplace(5);
    uset.emplace(6);

    cout<<uset.bucket_count()<<endl;
    // rehashing
    uset.rehash(3);
    cout<<uset.bucket_count()<<endl;
    return 0;
}