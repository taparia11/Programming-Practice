// Problem Link => https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// Optimized code
class Solution{
    public:
    
    void solve(int i, int j, vector<vector<int>> &m, int n, vector<string> &ans, string move, vector<vector<int>> &vis, int di[], int dj[]){
        if(i==n-1 && j==n-1){
            ans.emplace_back(move);
            return;
        }
        string dir = "DLRU";
        for(int ind=0; ind<4; ind++){
            int nextI = i + di[ind];
            int nextJ = j + dj[ind];
            if(nextI>=0 && nextJ>=0 && nextI<n && nextJ<n && !vis[nextI][nextJ] && m[nextI][nextJ]){
                vis[i][j] = 1;
                solve(nextI, nextJ, m, n, ans, move + dir[ind], vis, di, dj);
                vis[i][j] = 0;
            }
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n,0));
        string move = "";
        int di[] = {1, 0, 0, -1};
        int dj[] = {0, -1, 1, 0};
        if(m[0][0]==1)
            solve(0, 0, m, n, ans, move, vis, di, dj);
    
        return ans;
    }
};


//*******************************************************************************
// Brute froce approch

// class Solution{
//     private:
//         void solve(int i, int j, vector<vector<int>> &m, vector<string> &ans, string move, int n, vector<vector<int>> &vis){
//             if(i == n-1 && j==n-1){
//                 ans.push_back(move);
//                 return;
//             }
//             //Downward 
//             // check place is possible and not visited and having 1
//             if(i+1<n && !vis[i+1][j] && m[i+1][j]==1){
//                 vis[i][j] = 1;
//                 solve(i+1, j, m, ans, move + 'D', n, vis);
//                 vis[i][j] = 0;
//             }
//             //Leftward
//             // check that place is possible and not visited and having 1
//             if(j-1>=0 && !vis[i][j-1] && m[i][j-1]==1){
//                 vis[i][j] = 1;
//                 solve(i, j-1, m, ans, move + 'L', n, vis);
//                 vis[i][j] = 0;
//             }
//             //Rightward
//             // check that place is possible and not visited and having 1
//             if(j+1<n && !vis[i][j+1] && m[i][j+1]==1){
//                 vis[i][j] = 1;
//                 solve(i, j+1, m, ans, move + 'R', n, vis);
//                 vis[i][j] = 0;
//             }
//             //Upward
//             // check that place is possible and not visited and having 1
//             if(i-1>=0 && !vis[i-1][j] && m[i-1][j]==1){
//                 vis[i][j] = 1;
//                 solve(i-1, j, m, ans, move + 'U', n, vis);
//                 vis[i][j] = 0;
//             }
//         }
//     public:
//     vector<string> findPath(vector<vector<int>> &m, int n) {
//         // Your code goes here
//         vector<string> ans;
//         string move = "";
//         vector<vector<int>> vis(n, vector<int>(n,0));
//         if(m[0][0]==1)
//             solve(0, 0, m, ans, move, n, vis);
//         return ans;
//     }
// };

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends