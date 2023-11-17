/*   ----------------- Stack -------------------*/

/*
    1. push - pushing value into stack
    2. pop - poping value from stack
    3. empty - wheather stack is empty or not
    4. size - stack size
    5. top - top most element of stack
    6. swap - swapping two stacks values
    7. emplace - same as push
*/
 // LIFO - Last in first out

// 3   -> 1
// 4   -> 2
// 5   -> 3

#include<bits/stdc++.h>

using namespace std;

int main(){

    // stack<data_type> stack_name;

    stack<int> st;

//    cout<<st.empty()<<endl;
    // st.push(5);
    // st.push(4);
    // st.push(3);
    st.emplace(5);
    st.emplace(4);
    st.emplace(3);

    stack<int> s;
    s.push(1);
    s.push(4);
    s.push(9);

    // st s
    // 3  1
    // 4
    // 5

    /*
        1. for
        2. while
    */


//    while(!st.empty()){
//     // top
//     int val = st.top();
//     st.pop();
//     cout<<val<<" ";
//    }
    // int n = st.size();

    swap(st, s);
    for (int i = 0; i < st.size(); )
    {
        int val = st.top();
        st.pop();
        cout<<val<<" ";
    }
    
   return 0;
}