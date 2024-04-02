// we will see how we apply resize operations in 2-D vectors.

//Resizing a 2D Vector / Matrix
#include <bits/stdc++.h>
using namespace std;

void displayMatrix(vector<vector<int>> v){
	int N = v.size();
	int M = v[0].size();
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
    // creating an 2D-vector, integer.
    vector<vector<int>> vect2d;
    cout<<vect2d.size()<<endl;
    vect2d.resize(5, vector<int> (4, 100));
	return 0;
}