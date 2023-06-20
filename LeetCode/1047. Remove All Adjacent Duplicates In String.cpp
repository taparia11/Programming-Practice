// Problem Link => https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(auto it:s){
            if(st.empty())
                st.push(it);
            else if(it!=st.top())
                st.push(it);
            else if(st.top() == it)
                st.pop();
        }
        string str;
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }   
};