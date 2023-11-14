/*--------------------------Vector ---------------------*/

/*

// Leetcode Specialf
   1. begin
   2. end
   3. size
   4. empty
   5. push_back
   6. pop_back
   7. emplace_back
   8. iterator
   9. erase
   10. clear
   11. rbegin
   12. rend
   
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    // vector< data_type> vector_name
    // data_types => int, char, string, pair, double


    vector<int> myVector;
    myVector.push_back(5);
    myVector.emplace_back(7);
    myVector.emplace_back(9);
    // 5 7

        

    // myVector.pop_back();
    // 5

    // int n = myVector.size();
    // cout<<n;

    // vector<int> :: iterator it = myVector.begin();
    // myVector.erase(it);
    // myVector.clear();

// for (int i = 0; i < myVector.size(); i++)
// {
//     // cout<<myVector.at(i)<<" ";
//     cout<<myVector[i]<<" ";
// }
    // cout<<myVector.empty();


// Traversal
    // using array method
    // at
    // iterator

// for (int i = 0; i < myVector.size(); i++)
// {
//     cout<<myVector.at(i)<<" ";
//     cout<<myVector[i]<<" ";
// }

// for(auto it:myVector)
//     cout<<it<<" ";

// vector<int>:: iterator it;

// begin() 0 -> n
// end() n

// rbegin
//rend

// for (it = myVector.begin(); it != myVector.end(); it++)
// {
//     /* code */
    // cout<<*(it)<<" ";
    
    vector<int> :: reverse_iterator it= myVector.rbegin();

    while (it!=myVector.rend())
    {
        cout<<*(it)<<" ";
        it++;
    }
    

    return 0;
}

