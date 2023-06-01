// Problem Link => https://leetcode.com/problems/convert-the-temperature/description/

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        ans.emplace_back(celsius + 273.15);
        ans.emplace_back((celsius * 1.80) + 32.00);
        return ans;
    }
};