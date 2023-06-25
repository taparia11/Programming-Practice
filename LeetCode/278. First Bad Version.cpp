// Problem Link => https://leetcode.com/problems/first-bad-version/description/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int start=0,end=n,mid;
        while(start<=end){
            long long mid = (start+end)/2;
            if(start==end-1)
                return end;
            if(isBadVersion(mid)){
                end=mid;
            }
            else{
                start = mid;
            }
        }
            return 1;
    }
};