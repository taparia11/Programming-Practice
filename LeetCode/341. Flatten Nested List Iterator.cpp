// Problem Link => https://leetcode.com/problems/flatten-nested-list-iterator/description/?envType=daily-question&envId=2023-10-20

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator
{
public:
    vector<int> flattend;
    int idx = 0;

    vector<int> flatten(vector<NestedInteger> &nestedList)
    {
        vector<int> result;
        for (auto it : nestedList)
        {
            if (it.isInteger())
                result.push_back(it.getInteger());
            else
            {
                auto subList = flatten(it.getList());
                result.insert(result.end(), subList.begin(), subList.end());
            }
        }
        return result;
    }

    NestedIterator(vector<NestedInteger> &nestedList)
    {
        flattend = flatten(nestedList);
    }

    int next()
    {
        return flattend[idx++];
    }

    bool hasNext()
    {
        return idx < flattend.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */