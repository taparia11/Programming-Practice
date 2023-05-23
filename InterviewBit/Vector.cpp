#include<iostream>
#include <vector>
#include<algorithm>
// Problem Link => https://www.interviewbit.com/problems/vector/

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int a,n,i;
    vector<int> arr;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
        cin>>a;
        arr.erase(arr.begin()+a);
        sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<*(arr.begin()+i)<<endl;
    }

    // for(auto it:arr){
    //     cout<<it<<endl;
    // }
    
    
    return 0;
}