// Problem Link => https://leetcode.com/problems/minimum-processing-time/

class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) { 
        vector<int> cores;
        for(auto it:processorTime)
            for(int i=0; i<4; i++)
                cores.push_back(it);
        sort(cores.begin(), cores.end());
        sort(tasks.begin(), tasks.end(), greater<int>());
        int ans =0 ;
        for(int i=0; i<tasks.size(); i++)
            ans = max(ans, cores[i] + tasks[i]);
        
        return ans;
    }
};