// Problem Link => https://www.codingninjas.com/studio/problems/frog-jump_3621012?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


// Memoization Method
#include <bits/stdc++.h>
int f(int i, vector<int> &heights, vector<int> &dp)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int left = f(i - 1, heights, dp) + abs(heights[i] - heights[i - 1]);
    int right = INT_MAX;
    if (i > 1)
        right = f(i - 2, heights, dp) + abs(heights[i] - heights[i - 2]);

    return dp[i] = min(left, right);
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n + 1, -1);
    return f(n - 1, heights, dp);
}

#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    // 10 22 30 40
    // 1 10 22 22 30
    // 2 10 30
    // 3 10 30 30 40
    // 4 10 22 22 40

    // int arr[n];
    // memset(arr, -1, n);
    int prev = 0;
    int prev2 = 0;
    int count = 0;
    for(int i=1; i<n; i++){
        int fs = prev + abs(heights[i] - heights[i-1]);
        int ss = INT_MAX;
        if(i>1)
            ss = prev2 + abs(heights[i] - heights[i-2]);
        count = min(fs, ss);
        prev2 = prev;
        prev = count;         
    }
    return count;
}