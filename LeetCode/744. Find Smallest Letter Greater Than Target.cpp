// Problem Link => https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        char max = 'z';
        int c = 0;
        for (auto it : letters)
            if (it > target)
                if (max >= it)
                {
                    max = it;
                    c++;
                }
        if (c == 0)
            return letters[0];
        else
            return max;
    }
};