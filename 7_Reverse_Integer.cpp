#include<bits/stdc++.h>
class Solution {
public:
    void reverseStr(string& str) 
    { 
        int n = str.length(); 

        // Swap character starting from two 
        // corners 
        for (int i = 0; i < n / 2; i++) 
            swap(str[i], str[n - i - 1]); 
    } 
    int reverse(int x) 
    {
        string str = to_string(x);
        cout<<str;
        reverseStr(str);
        
        if(stol(str)>INT_MAX)str="0";
        
        if(x<0)return 0-stoi(str);
        return stoi(str);
        
    }
};