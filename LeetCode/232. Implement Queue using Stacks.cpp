// Problem Link => https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        int s = st1.size()-1;
        while(s--){
            st2.push(st1.top());
            st1.pop();
        }
        s = st1.top();
        st1.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return s;
    }
    
    int peek() {
        int s = st1.size()-1;
        while(s--){
            st2.push(st1.top());
            st1.pop();
        }
        s = st1.top();
        st2.push(st1.top());
        st1.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return s;
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */