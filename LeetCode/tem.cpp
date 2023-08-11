#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        ans.push_back(val);
    }
bool flag = true;
    for (int i = 1; i < n; i++)
    {
        /* code */if(ans[i-1] != ans[i]){
                cout<<"No";
                flag = false;
        }
    }

if(flag)
    cout<<"Yes";
    
    
    return 0;
}