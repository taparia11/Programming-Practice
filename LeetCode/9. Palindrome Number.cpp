// Problem Link => https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        long long int first=x,second=0;
        while(x){
            int a = x%10;
            second = second*10+a;
            x/=10;
        }
        if(first==abs(second))
            return true;
        else
            return false;
    }
};