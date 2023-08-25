// Problem Link => https://leetcode.com/problems/find-the-winner-of-an-array-game/description/?envType=daily-question&envId=2023-11-05

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxElement = *max_element(arr.begin(), arr.end());
        int curr = arr[0];
        int winstreak = 0;
        for(int i=1; i<arr.size(); i++){
            int opponent = arr[i];
            if(curr > opponent){
                winstreak++;
            }
            else{
                curr = opponent;
                winstreak = 1;
            }
            if(curr == maxElement || winstreak == k)
                return curr;
        }
        return -1;
    }
};