// Problem Link => https://leetcode.com/problems/permutation-sequence/description/

class Solution {
public:
    string getPermutation(int n, int k) {
        //Storing numbers from 1 to n
        vector<int> number;
        int fact = 1;
        //adding numbers into vector and calculating factorial till n-1
        for(int i=1; i<n; i++){
            fact = fact * i;
            number.push_back(i);
        }
        number.push_back(n);
        string ans = "";
        // k = k-1 because 0-base Indexing
        k = k-1;
        while(true){
                
            // position of element  =  k / fact
            ans = ans + to_string(number[k/fact]);
            number.erase(number.begin() + k / fact);
            if(number.size()==0)
                break;
            // new k = k % fact
            k = k%fact;
            // updating fact to new number size in vector (here size is decreasing by 1 every time in vector
            //  so we dividing it with number size)
            //  n = 4 fact = 6
            //  n = 3 fact = 6/3 = 2
            //  n = 2 fact = 2/2 = 1
            fact = fact / number.size();
        }
        return ans;
    }
};