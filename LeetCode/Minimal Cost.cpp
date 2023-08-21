// Problem Link => https://www.codingninjas.com/studio/problems/minimal-cost_8180930?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int minimizeCost(int n, int k, vector<int> &height){
    // Write your code here.
    vector<int> dp(n,0);
    dp[0] = 0;
    for(int i=1; i<n; i++){
        int sum = INT_MAX;
        for(int j=1; j<=k; j++){
            int jump;
            if(i-j >= 0){
                jump = dp[i-j] + abs(height[i] - height[i-j]);
                sum = min(sum, jump);
            }
            else
                continue;
        }
        dp[i] = sum;
    }
    return dp[n-1];
}