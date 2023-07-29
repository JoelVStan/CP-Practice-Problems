// Given a string S consisting of lowercase Latin Letters.]
// Return the first non-repeating character in S. 
// If there is no non-repeating character, return '$'. 

// eg: hello should return 'h'
// abbacc should return '$'

#include<bits/stdc++.h>

using namespace std;

char findNonRepeatingChars(string S) {
    unordered_map<char, int> umap;

    // add chars to umap and increment frequency
    for(int i=0; i<S.size(); i++) {
        umap[S[i]]++;
    }

    //search for first element with frequency 1, return it
    for(int i=0; i<S.size(); i++) {
        if(umap[S[i]] == 1) {
            return S[i];
        }
    }
    // else return $
    return '$';

}

int main() {
    string s;
    cin>>s;
    cout<<findNonRepeatingChars(s);
    return 0;
}