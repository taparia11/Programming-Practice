// Problem Link => https://www.codingninjas.com/studio/problems/minimal-cost_8180930?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int minimizeCost(int n, int k, vector<int> &height){
    // dp Initialized
    vector<int> dp(n,0);
    //base case
    dp[0] = 0;
    // iterating till nth stone
    for(int i=1; i<n; i++){
        int sum = INT_MAX;
        // from every stone to jumping till k and checking energy loss
        for(int j=1; j<=k; j++){
            int jump;
            // if index is possiable then only calculate energy
            if(i-j >= 0){
                jump = dp[i-j] + abs(height[i] - height[i-j]);
                // taking minimum of all jumps 
                sum = min(sum, jump);
            }
        }
        // storing minimum energy value to dp;
        dp[i] = sum;
    }
    // returning till nth index minimum energy loss 
    return dp[n-1];
}