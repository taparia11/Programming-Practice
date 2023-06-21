// Problem Link => https://leetcode.com/problems/make-the-string-great/description/

class Solution {
public:
    string makeGood(string s) {
        if(s.empty())
            return s;
        stack<char> st;
        for(auto it:s){
            if(!st.empty()){
                if(st.top() == it+32 || st.top() == it-32){
                    st.pop();
                }
                else{
                    st.push(it);
                }
            }
            else
                st.push(it);
        }
        string str;
        while(!st.empty()){
            str = str + st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};