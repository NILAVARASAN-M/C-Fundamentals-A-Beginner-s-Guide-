#include<iostream>
#include<unordered_map>

using namespace std;

int main1(){
    unordered_map<string, int> umap;
    umap["Nila"]=1;
    umap["Dadow"]=2;
    umap["Priya"]=3;
    // returns the first pair, in the orignal hash-map representation.
    auto itr=umap.begin();
    cout<<itr->first<<" "<<itr->second; 
    // can be used in loops also
    for(itr=umap.begin(); itr!=umap.end(); itr++){
    cout<<itr->first<<" "<<itr->second; 
    }
}

// we can even pass integer-value, inside the begin() function.
// umap.begin(n), n tells us the bucket number.
// be carefull, sometimes, the n might not be an valid bucket.
// somethimes the n  can be an valid-bucket, but there might be no element's inside the bucket. so begin()==end() in that case.
// so when u pass n, u are aksing for the first-element in that bucket-number. same goes for end() function also.s

int main()
{
	unordered_map<std::string, std::string> mymap;
	mymap = { { "Australia", "Canberra" }, 
			{ "U.S.", "Washington" }, { "France", "Paris" } };
	auto it = mymap.begin(0);
	cout << it->first << " " << it->second;
	return 0;
}
