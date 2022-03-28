#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseStr(vector<char> &str,int start,int end){
        if(start>end)
        return;
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        reverseStr(str,start+1,end-1);
    }
    void reverseString(vector<char>& s) {
        vector<char> res;
        reverseStr(s,0,s.size()-1);
    }
};