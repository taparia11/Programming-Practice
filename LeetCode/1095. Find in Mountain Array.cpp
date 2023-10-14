// Problem Link => https://leetcode.com/problems/find-in-mountain-array/description/?envType=daily-question&envId=2023-10-12

/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:

    int findPeakIndex(int low, int high, MountainArray &mountainArr){
        while(low!=high){
            int mid = low + (high - low)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1))
                low = mid+1;
            else
                high = mid;
        }
        return low;
    }

    int binarySearch(int low, int high, int target, MountainArray &mountainArr, bool reversed){
        while(low!=high){
            int mid = low + (high - low)/2;
            if(reversed){
                if(mountainArr.get(mid) > target )
                    low = mid+ 1;
                else
                    high = mid;
            }
            else{
                if(mountainArr.get(mid) < target)
                    low = mid + 1;
                else
                    high = mid;
            }
        }
        return low;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        // taking length of mountain mountainArr
        int length = mountainArr.length();

        // finding peak Index in mountainArr
        int peakIndex = findPeakIndex(1, length-2, mountainArr);

        // check wheather target in available in increasingIndex or not
        int increasingIndex = binarySearch(0, peakIndex, target, mountainArr, false);
        // checking returened index having same value as target or not
        if(mountainArr.get(increasingIndex) == target)
            return increasingIndex;

        // check wheather target in available in decrasingIndex or not
        int decreasingIndex = binarySearch(peakIndex+1 , length-1, target, mountainArr, true);
        // checking returened index having same value as target or not
        if(mountainArr.get(decreasingIndex) == target)
            return decreasingIndex;

        // if not available in mountainArr return -1     
        return -1;
    }
};