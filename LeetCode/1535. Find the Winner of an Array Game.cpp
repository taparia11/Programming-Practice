// Problem Link => https://leetcode.com/problems/find-the-winner-of-an-array-game/description/?envType=daily-question&envId=2023-11-05

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        // finding max value in arr
        int maxElement = *max_element(arr.begin(), arr.end());
        int curr = arr[0]; // setting first value
        int winstreak = 0; // counting winning streak
        // iterating over th entire arr until streak == k || curr == max value
        for(int i=1; i<arr.size(); i++){
            int opponent = arr[i]; 
            // curr is greater than opponent
            if(curr > opponent){
                winstreak++;
            }
            // curr is less than opponent
            else{
                curr = opponent;
                winstreak = 1;
            }
            // if our curr is max value then it will never loss or winning streak is equal to k
            if(curr == maxElement || winstreak == k)
                return curr;
        }
        // no possiable solution when arr empty
        return -1;
    }
};