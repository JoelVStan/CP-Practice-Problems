// Reverse words in a given string

// This is a program to reverse the words in a string
// O/P:
// string a in words the reverse to program a is This


#include<bits/stdc++.h>
using namespace std;

string reverseWords (string str) {

    // vector to store individual words
    // word to store a word from the string
    // result is to store the final output string
    vector<string> v;
    string word = "", result;

    // loop through the string, if it is a char add it to word
    // else if it is a space, add the word to vector, make word empty
    for(int i=0; i<str.length(); i++) {
        if(str[i] != ' ') {
            word += str[i];
        }
        else {
            v.push_back(word);
            word = "";
        }
    }
    v.push_back(word); // push the last word to the vector

    // loop to reverse the vector
    // start vector from last position, add the word to result string
    // add a space after each word, till it reaches i=0
    for(int i=v.size()-1; i>=0; i--) {
        result += v[i];
        if(i != 0)
            result += " ";
    }
    return result;
}


int main() {

    string s = "This is a program to reverse the words in a string";

    cout<<reverseWords(s);

    return 0;
}