// lets see some sorting, but sorting it for std::pair --> pair() fn defined in stl lib.

#include<iostream>
#include<vector>
#include<algorithm>

bool sortbysecdesc(const std::pair<int,int> &a,
                   const std::pair<int,int> &b)
{
       return a.second>b.second;
}

int main(){
    // Declaring vector of pairs
    std::vector< std::pair <int,int> > vect;
 
    // Initializing 1st and 2nd element of
    // pairs with array values
    int arr[] = {5, 20, 10, 40 };
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    // Entering values in vector of pairs 
    for (int i=0; i<n; i++)
        vect.push_back(std::make_pair(arr[i],arr1[i]) );
    std::sort(vect.begin(), vect.end(), sortbysecdesc);
    return 0;
}

// see here we are sorting by the second element,
// by default the sort algo will take the first values in the pair, and sort. but if u want other index  else, then have to declare explicitly only.
