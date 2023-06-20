// Problem Link => https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int j=0;j<prices.size();j++){
            for (int i = j+1; i < prices.size(); i++)
            {
                if(prices[j]>=prices[i]){
                    prices[j] = prices[j] - prices[i];
                    break;
                }
            }
        }
        return prices;
    }
};