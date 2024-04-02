#include<iostream>
#include<vector>

using namespace std;

void displayMatrix(vector<vector<int>> v){
	int N = v.size();
	for(int i=0; i<N; i++){
	    int M = v[0].size();
		for(int j=0; j<M; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
    std::vector<std::vector<int>> v;
    displayMatrix(v);
    for(int i=0;i<3;i++){
        v.push_back({1+i, 2+i, 3+i});
    }
    displayMatrix(v);
    for(int i=0;i<v.size();i++){
        v[i].resize(10);
    }
    displayMatrix(v);
    return 0;    
}