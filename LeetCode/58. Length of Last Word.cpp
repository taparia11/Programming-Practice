// Problem Link => https://leetcode.com/problems/length-of-last-word/description/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int siz = s.size(), count = 0, flag = 0;
        for (int i = siz - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && flag)
                break;
            if (s[i] != ' ')
            {
                flag = 1;
                count++;
            }
        }
        return count;
    }
};