// Problem Link => https://leetcode.com/problems/sqrtx/description/

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return x;
        int first = 1, last = x;
        while (first <= last)
        {
            int mid = first + (last - first) / 2;
            if (mid == x / mid)
                return mid;
            else if (mid > x / mid)
                last = --mid;
            else
                first = ++mid;
        }
        return last;
    }
};