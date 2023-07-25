// Problem Link => https://leetcode.com/problems/min-stack/description/

class MinStack
{
public:
    stack<int> mainSt;
    stack<int> minSt;
    MinStack()
    {
    }

    void push(int val)
    {
        mainSt.push(val);
        if (minSt.empty() || val <= minSt.top())
            minSt.push(val);
    }

    void pop()
    {
        if (minSt.top() == mainSt.top())
        {
            minSt.pop();
        }
        mainSt.pop();
    }

    int top()
    {
        if (!mainSt.empty())
            return mainSt.top();
        else
            return 0;
    }

    int getMin()
    {
        if (!minSt.empty())
            return minSt.top();
        else
            return 0;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */