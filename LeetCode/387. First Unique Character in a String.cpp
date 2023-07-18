// Problem Link => https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution
{
public:
    int firstUniqChar(string s)
    {

        // Using hashing approch

        unordered_map<char, int> mp;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]] == 1)
                return i;
        }
        return -1;

        // Using iterative approch

        // int siz = s.length();
        // int arr[26]={0};
        // for(int i=0;i<siz;i++){
        //         arr[s[i]-97]++;
        // }
        // for(int i=0;i<siz;i++){
        //         if(arr[s[i]-97] == 1)
        //             return i;
        // }
    }
};