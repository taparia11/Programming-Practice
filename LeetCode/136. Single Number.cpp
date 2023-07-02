// Problem Link => https://leetcode.com/problems/single-number/

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

// Using map STL


        // map<int, int> hashmap;
        // for (auto num : nums)
        //     hashmap[num]++;
        // for (auto it : hashmap)
        //     if (it.second == 1)
        //     {
        //         return it.first;
        //     }
        // return 0;



// Using set STL

        set<int> hashset;
        for(auto it:nums)
            if(hashset.count(it)>0)
                hashset.erase(it);
            else 
                hashset.insert(it);
        return *(hashset.begin());
    }
};