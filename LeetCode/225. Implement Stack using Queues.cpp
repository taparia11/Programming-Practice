// Problem Link => https://leetcode.com/problems/implement-stack-using-queues/description/

class MyStack {
public:
    queue<int> mque;
    MyStack() {
        
    }
    
    void push(int x) {
        mque.push(x);
    }
    
    int pop() {
        int s = mque.size();
        while(s>1){
            int temp = mque.front();
            mque.pop();
            mque.push(temp);
            s--;
        }
        s = mque.front();
        mque.pop();
        return s;
    }
    
    int top() {
        return mque.back();
    }
    
    bool empty() {
        return mque.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */