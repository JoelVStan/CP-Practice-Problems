// O(n log n)

// Sort the string, then look for similar chars in adjacent places.

#include <bits/stdc++.h>
using namespace std;

bool isUnique(string str) {
    //sort the string
    sort(str.begin(), str.end());

    //check if adjacent elements are same
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == str[i+1])
        {
            return false;
            break;
        }
    }
    return true;
}


int main()
{
    string s = "abcdd";
    if(isUnique(s) == true)
    {
        cout<<"Unique";
    }
    else
    {
        cout<<"Not Unique";
    }
    return 0;
}
