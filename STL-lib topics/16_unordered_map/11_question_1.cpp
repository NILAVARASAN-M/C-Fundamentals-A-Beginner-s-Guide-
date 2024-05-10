/*
Input: str = “geeks for geeks geeks quiz practice qa for”;
Output: Frequencies of individual words are
(practice, 1)
(for, 2)
(qa, 1)
(quiz, 1)
(geeks, 3)
*/

#include<iostream>
#include<sstream>
#include<unordered_map>

using namespace std;

int main(){
    std::string text = "apple banana cherry apple banana cherry apple banana cherry nila";
    unordered_map<string, int> freq_word;

    stringstream ss(text);
    string temp;
    while(ss>>temp){
        freq_word[temp]++;
    }

    for(auto itr=freq_word.begin(); itr!=freq_word.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}