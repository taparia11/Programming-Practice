/* +++++++++++ Table of Content ++++++++++*/

/*
    1. Array
    2. Recursion - Array (Top to down approch)
    2. Recursion - vector  (top to down approch)
    3. Variable Method (space optimized)
*/

// 0 1 1 2 3 5 8 13 ......
// 0 1 2 3 4 5 6 7

// 3 . variable

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int number;
    cin>>number;
    int prev2 = 0;
    int prev = 1;
    if(number==0)
        prev = 0;

    for (int i = 2; i <= number; i++)
    {
        // last + second value to get curr val
        int curr = prev + prev2;
        // 1 2 3 4 5
        prev2 = prev;
        prev = curr;
    }
    cout<<prev;
    return 0;
}