// Problem Link => https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int i = haystack.find(needle);
        return i;
    }
};