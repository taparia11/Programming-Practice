// Problem Link => https://leetcode.com/problems/is-subsequence/description/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sSize = s.length();
        int j = 0;
        for(int i=0; i<t.length(); i++){
            if(t[i] == s[j])
                j++;
        }

        return j==sSize;
    }
};