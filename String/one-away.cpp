// You are given two strings, string A and string B. 
// Your task is to determine whether string A can be transformed into string B by performing only one of the following operations at most one (or maybe zero) time.

// 1. You can delete a character from any position.
// 2. You can replace a character with any other character.
// 3. You can insert a character at any position. 

#include<bits/stdc++.h>

using namespace std;

bool oneAwaySame(string A, string B) {
    int count=0;

    for(int i=0; i<A.length(); i++) {
        if(A[i] != B[i]) {
            count++;
            if(count>1) {
                return false;
            }
        }
    }
    return true;
}

bool oneAwayNotSame(string A, string B) {
    int i=0, j=0;
    while (j<B.length() && i<A.length()) {
        if(A[i] != B[j]) {
            if(i != j) {
                return false;
            }
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    return true;
}

bool oneAway (string s1, string s2) {
    if(s1.length() == s2.length()) {
        return oneAwaySame(s1, s2);
    }
    else if(s1.length() + 1 == s2.length()) {
        return oneAwayNotSame(s1, s2);
    }
    else if(s1.length() - 1 == s2.length()) {
        return oneAwayNotSame(s2, s1);
    }
    return false;
}

int main() {
    string s1, s2;
    cin>>s1>>s2;
    if(oneAway(s1, s2) == true) 
        cout<<"true";
    else 
        cout<<"false";
    return 0;
}