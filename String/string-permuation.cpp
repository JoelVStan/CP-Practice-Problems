// compare length of 2 strings
// sort 2 strings
// check they are equal or not

// === O(n logn) ====

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s1, s2;
//     cin>>s1>>s2;

//     if(s1.length() != s2.length()) 
//     {
//         cout<<"Not permutation";
//     }

//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());

//     if(s1 == s2) 
//     {
//         cout<<"permutation";
//     }
//     else
//     {
//         cout<<"Not permutation";
//     }
// }

// ---------------------------------------------------------------

// === O(n) ====

#include <bits/stdc++.h>
using namespace std;

bool isPermutation(string s1, string s2) {

    // check if length of 2 strings are different

    if(s1.length() != s2.length()) 
    {
        return false;
    }

    // create 2 int arrays with 256 (8 bits), initialize to all 0s.
    int count1[256] = {0};
    int count2[256] = {0};

    // increment the array value, by checking char in string using ASCII code

    for (int i=0; i<s1.length(); i++) {
        count1[s1[i]]++;
        count2[s2[i]]++;
    }

    // if both count arrays are equal, then it is permutation

    for(int i=0; i<256; i++) {
        if(count1[i] != count2[i])
        {
            return false;
        }
    }
    return true;
}


int main(){
    string s1, s2;
    cin>>s1>>s2;

    if(isPermutation(s1, s2) == true)
    {
        cout<<"Permutation";
    }
    else 
    {
        cout<<"Not Permutation";
    }
    return 0;
}



