// Problem Link => https://leetcode.com/problems/fizz-buzz/description

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> base;

        for (int i = 1; i <= n; i++) 
        {
            if (i%3==0 && i%5==0)
            {
                base.push_back("FizzBuzz");
            }
            else if (i%3==0)
            {
                base.push_back("Fizz");
            }
            else if (i%5==0)
            {
                base.push_back("Buzz");
            }
            else{
                base.push_back(i);
            }
            
        }
            return base;
    }
};