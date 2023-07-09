// Problem Link => https://leetcode.com/problems/find-the-difference/description/

class Solution {
public:
    char findTheDifference(string s, string t) {
        char c; 
        sort(s.begin(), s.end()); 
        sort(t.begin(), t.end()); 
        for(int i=0; i<s.length(); i++){
            if(s[i] == t[i]) continue; 
            else return t[i];
        }

        return t[s.length()]; 
    }
};