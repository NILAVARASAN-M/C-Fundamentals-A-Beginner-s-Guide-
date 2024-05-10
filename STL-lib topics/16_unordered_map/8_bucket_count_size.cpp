// bucket():
// synatx umap.bucket(key); we pass the key, and it will return that key-value pair's bucket number.

// bucket_count():
// umap.bucket_count(); will return the number of buckets alloacted for that unordermap.

// bucket_size():
// umap.bucket_size(i); i is the bucket number u wnat, this function will return the number of key-value pair in that ith bucket.


// implementaion-1
#include <bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<string, double> umap;
	umap["PI"] = 3.14;
	umap["root2"] = 1.414;
	umap["log10"] = 2.302;
	umap["loge"] = 1.0;
	umap["e"] = 2.718;
	for (auto& x : umap) {
		cout << "(" << x.first << ", " << x.second << ")";
		cout << " is in bucket= " << umap.bucket(x.first)
			<< endl;
	}
	cout << endl;
	int n = umap.bucket_count();
	cout << "umap has " << n << " buckets.\n\n";

	for (int i = 0; i < n; i++) {
		cout << "Bucket " << i << " has "
			<< umap.bucket_size(i) << " elements.\n";
	}

	return 0;
}

// impelementaion

int main_1()
{
	unordered_map<string, double> umap;
	umap["PI"] = 3.14;
	umap["root2"] = 1.414;
	umap["log10"] = 2.302;
	umap["loge"] = 1.0;
	umap["e"] = 2.718;

	unsigned n = umap.bucket_count();

	for (unsigned i = 0; i < n; i++) {
		cout << "Bucket " << i << " contains: ";
		for (auto it = umap.begin(i); it != umap.end(i);
			it++)
			cout << "(" << it->first << ", " << it->second
				<< ") ";
		cout << "\n";
	}
	return 0;
}
