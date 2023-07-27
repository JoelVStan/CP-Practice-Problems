// compress the given string
// eg: aaabbccc -> a3b2c3
// if compress string is not smaller than original string, return original

// === O(n) ===



#include<bits/stdc++.h>

using namespace std;

string compFunc(string str) {
    string res = "";

    // iterate through string str
    for(int i=0; i<str.length(); i++) {
        int c = 1;
        // if adjacent chars are same, go to next char, increment count c
        while(i<str.length() && str[i] == str[i+1]) {
            i++;
            c++;
        }
        // if adjacent chars are not same (while loop not entered), then add that char to res, add count c to res
        res += str[i];
        res += to_string(c);
    }

    // if length of res is less than str, then only return res, else return original string str
    if(res.length() < str.length()) {
        return res;
    }
    else {
        return str;
    }
}

int main() {
    string s;
    cin>>s;
    cout<<compFunc(s);
    return 0;
}