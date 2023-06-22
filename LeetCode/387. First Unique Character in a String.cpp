// Problem Link => https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
public:
    int firstUniqChar(string s) {
        int siz = s.length();
        int arr[26]={0};
        for(int i=0;i<siz;i++){
                arr[s[i]-97] = arr[s[i]-97] + 1;
        }
        for(int i=0;i<siz;i++){
                if(arr[s[i]-97] == 1)
                    return i;
        }
        return -1;
    }
};