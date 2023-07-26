// URLify a given string (Replace spaces with %20)
// Write a method to replace all the spaces in a string with ‘%20’. 
// You may assume that the string has sufficient space at the end to
// hold the additional characters and that you are given the “true” length of the string.

// Mr John Smith    , 13
// Mr%20John%20Smith

// === O(n) ===

// Use char array instead of string


#include<bits/stdc++.h>

using namespace std;

void urlify(char* s, int l) {
    int sc=0, j;

    // count number of spaces in between the words
    for(int i=0; i<l; i++) {
        if(s[i] == ' ') {
            sc++;
        }
    }

    // j is the length of char array including spaces at the end
    j = l + sc * 2;

    // start loop from back
    // if space found, replace it with %20
    // else copy that char
    for(int i=l-1; i>=0; i--) {
        if(s[i] == ' ') {
            s[j-1] = '0';
            s[j-2] = '2';
            s[j-3] = '%';
            j = j - 3; 
        }
        else {
            s[j-1] = s[i];
            j--;
        }
    }
}


int main() {
    char s[] = "Mr John Smith    ";
    int n = 13;
    cout<<"Original: "<<s;
    urlify(s,n);
    cout<<"\nModified: "<<s;
    return 0;
}