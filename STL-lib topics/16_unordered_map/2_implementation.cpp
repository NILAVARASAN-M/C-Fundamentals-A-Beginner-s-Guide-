#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

ostream& operator<<(ostream& COUT, const unordered_map<string, int> umap){
    for(auto &val: umap){
        COUT<<val.first<<" "<<val.second<<endl;
    }
    return COUT;
}

// we have to "ostream&"" as the return-type, not "ostream"<---(no refrence here) b/c ostream  is an single resorce.
// only one process can use it at an given-time  (resource: console),  so we should not make copies and return.
// but have to return the exact object, not an copy (making sure that the resouce are used by only one process).
// ostream is nothing but the console/ screen where this resource as we studied in OS also, only on process have to use it.
// multiple process using it can cause many problem's, so we just return ostream --> we are making an copy and returning it.
// we have to make sure that we dont return an copy, but the same ostream. so ony wew return the refrence of the ostream. 

// now one small-dought, what does returning an reference mean ???? How does it work internally??
int incrementByOne(int& x) {
    x += 1;
    return x;
}

// Take this example, so here we are passing an refrence to an variable. so we are not creating copy's of the variable.
// and the effect inside the function will get affected where the variable was created --> in main() function.\
// by this we have sorted out two things, we are saving memory, and also making the vhanges here will get affected in the 
// main-function. since they point to the sam-location/ alies.

// Now returning an variable, so what happens internally when we return an variable is.
// we first create an copy of this value you want to return, and from where u made the copy, 
// from there (the place where u made an copy of the return-value) that value is returned, to the return-address.
// so we are creating extra-memory(in-case of larger-objects it will be time-consumimg). so to avoid this we return,
// an refrence, which eseentially mean we are not making an copy for returning the value. where the variable was declared,
// from there the value is directly returned to the return-address. thus avoiding the overhead of creating an copy for returning an value.
int& incrementByOne2(int& x) {
    x += 1;
    return x;
}
// this is how we take as refrence, and return an refrence.

int main(){
    unordered_map<string, int> umap;
    umap["Nila"]=1;
    umap["Dadow"]=2;
    umap["Priya"]=3;
    cout<<umap;
}