// iterator unordered_map_name.end(n)

/*
Parameters : This function accepts one parameter n which is an optional parameter 
that specifies the bucket number. If it is set, the iterator retrieves points to the
past-the-end element of a bucket, otherwise, it points to the past-the-end element of the container.

Return value: The function returns an iterator to the element past the end of the container.
*/

// the 'n', tell's us the bucket number. And in that bucket, it will return the iterator, which is next to the last element(existing) in the bucket.

// lets write an code, for printing all the buckets present in the hash-map, (unordered_map).

// to find the number of bucket's of an unordered_map, we use bucket_count(). Which returns the number of bucket.
// each bucket is used for storing the same-hash-values(same index, same hash-value not possible think about sem-3 DSA),
// bucket can be implemented using linked-list or vector.

// the number of buckets alloacted for unordered_map can vary, depending on the impmention.
// a bucket can be empty, meanwhile other bucker can have multiple values. etc.

#include<iostream>
#include<unordered_map>
#include<string>


using namespace std;

// we may notice that there is no collison(not more than one key-value pair in the bucket), bacuse the values are consecutively ranging.
int main1(){
    unordered_map<int, int> umap;
    for(int i=0;i<100;i++){
        umap[i]=i;
    }

    // let's see how each bucket look like.
    for(int i=0;i<umap.bucket_count();++i){
        cout<<"BUCKET: "<<i<<"           "; 
        for(auto itr=umap.begin(i); itr!=umap.end(i); ++itr){
            cout << "(" << itr->first << ", " << itr->second << "), "; 
        }
        cout<<endl;
    }
    return 0; 
}

// here we use string, u might notice collison in this case below. all depends on the hash-function internally.
int main2() 
{ 
	unordered_map<string, int> marks; 
	marks = { { "Rohit", 64 }, { "Aman", 37 }, { "Ayush", 96 } }; 
	cout << "marks bucket contains : " << endl; 
	for (int i = 0; i < marks.bucket_count(); ++i) { 
		cout << "bucket #" << i << " contains:"; 
		for (auto iter = marks.begin(i); iter != marks.end(i); ++iter) { 
			cout << "(" << iter->first << ", " << iter->second << "), "; 
		} 
		cout << endl; 
	} 
	return 0; 
} 

// above is not the only way to use end, we can finish it in an single for loop.

int main() 
{ 
	unordered_map<string, int> marks; 
	marks = { { "Rohit", 64 }, { "Aman", 37 }, { "Ayush", 96 } }; 
	cout << "marks bucket contains : " << endl; 
	for (auto itr=marks.begin(); itr!=marks.end(); ++itr) { 
			cout << "(" << itr->first << ", " << itr->second << "), "; 
		cout << endl; 
	} 
	return 0; 
} 

// if we dont sepcify the bucket, number. begin() will return the first iterator in the first bucket, and as we increment it.
// we will go till the end of the first-bucket, next bucket and there iteration happen's and next consecutive bucket
// and till the end of the bucket. and similarly the last bucket, and in that till the
// last element in that last bucket.
// if we dont pass 'n' inside an end() function. It means, we are refereing to the last-bucket, in that the last iterator.