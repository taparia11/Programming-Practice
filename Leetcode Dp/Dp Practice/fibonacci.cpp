/*+++++ Table Of Content +++++*/
/*
    1. => Top _to_ Bottom Approch -- Memoization ( Recursion)
    2. => Bottom _to_ Top Approch -- Tabulation
    3. => Space Optimized Approch
*/

/*****************  Top _to_ Bottom Approch -- Memoization ( Recursion) *************************/

// Time = O(n)
// Space = O(n) arr + O(n) recursion stack space

/***********************************************Using Vector***********************************************/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int f(int n, vector<int> &dp){
    // base case of recursion
    if(n<=1)
        return n;
    // If value present in DP then return value
    if(dp[n] != -1)
        return dp[n];
    // calling recursion and result will store in n-th dp cell
    return dp[n] = f(n-1, dp) + f(n-2, dp);
}

int main(){
    // Taking which position value want to find
    int n;
    cin>>n;
    // Initializing n+1 postions with -1
    vector<int> dp(n+1, -1);
    // calling function to get value and printing
    cout<< f(n, dp);
    return 0;
}

/***********************************************Using Array***********************************************/
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int f(int n, int dp[]){
//     // Taking which position value want to find
//     if(n<=1)
//         return n;
//     // Initializing n+1 postions with -1
//     if(dp[n] != -1)
//         return dp[n];
//     // calling function to get value and printing
//     return dp[n] = fact(n-1, dp) + fact(n-2, dp);
// }

// int main(){
//     // Taking which position value want to find
//     int n;
//     cin>>n;
//     // Initializing n+1 size DP array
//     int dp[n+1];
//     // Initializing n+1 postions with -1
//     memset(dp, -1, sizeof dp);
//     // calling function to get value and printing
//     cout<<f(n, dp);
//     return 0;
// }

/*****************  Bottom _to_ Top Approch -- Tabulation *************************/


// Time = O(n)
// Space = O(n) arr

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;


// int main(){
//     // Taking which position value want to find
//     int n;
//     cin>>n;
//     // If n is 0 or 1 
//     if(n <= 1){
//         cout<<n;
//     }
//     // If n is greater then 1
//     else{
//         // Creating N size array
//         int arr[n];
//         // Setting 1st and 2nd Default positions  
//         arr[0] = 0;
//         arr[1] = 1;
//         // Iterating till n-th position
//         for (int i = 2; i <=n; i++)
//         {
//             // storing every i-th position value
//             arr[i] = arr[i-1] + arr[i-2];
//         }
//         // printing n-th position value
//         cout<<arr[n];
//     }
//     return 0;
// }

/*****************  Space Optimized Approach *************************/


// Time = O(n)
// Space = O(1)

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;


// int main(){
//     // Taking which position value want to find
//     int n;
//     cin>>n;
//     // handling last and second last values in (prev) and (prev2)
//     int prev2 = 0;
//     int prev = 1;
//     // if n == 1 for that curr already set default
//     int curr = prev;
//     // if n == 0 then set curr = 0
//     if(n == 0)
//         curr = 0;
//     // if n is greater then 1 Iterating till n-th position
//     for (int i = 2; i <=n; i++)
//     {
//         // Calculating ith value using last two value's
//         curr = prev + prev2;
//         // Setting last value to second last value
//         prev2 = prev;
//         // setting current value to last value
//         prev = curr;
//     }
    
//     // Returning ith value  
//     cout<<curr;
//     return 0;
// }