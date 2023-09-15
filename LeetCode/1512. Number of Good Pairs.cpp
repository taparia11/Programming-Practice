// Problem Link => https://leetcode.com/problems/number-of-good-pairs/description/

class Solution {
public:
        int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> cnt;
        for (int x: nums) {
        ans += cnt[x]++;
        cout<<cnt[x]-1<<endl;
        }
        return ans;
    }
};