// Problem Link => https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        // int num1 = 0, num2 = 0;
        // vector<int> divisible;
        // vector<int> notDivisible;
        // for(int i=1; i<=n; i++){
        //     if(i % m == 0)
        //         divisible.push_back(i);
        //     if(i % m != 0)
        //         notDivisible.emplace_back(i);
        
        // }
        // for(auto it:divisible)
        //     num2 += it;
        // for(auto it:notDivisible)
        //     num1 += it;
        // return num1-num2;

// Space Optimized Solution
    int ans = 0;
    for(int i=1; i<=n; i++)
        if( i % m != 0)
            ans += i;
        else
            ans -= i;
    return ans;
    }
};