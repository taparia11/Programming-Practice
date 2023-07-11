// Problem Link => https://leetcode.com/problems/guess-number-higher-or-lower/description/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int start=0,end=n,mid;
        while(start<=end){
            mid = (start+end)/2;
            switch(guess(mid)){
                case 1: start=++mid;
                        break;
                case -1: end=mid--;
                        break;
                default: return mid;
            }
        }
            return 1;
    }
};