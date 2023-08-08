// Problem Link => https://leetcode.com/problems/fibonacci-number/description/

class Solution {
public:
    int fib(int n) {
        //if n is 0 base case
        if(n==0)
            return 0;
        //if n is 1 base case
        if(n==1)
            return 1;
        return fib(n-1)+fib(n-2);
    }
};