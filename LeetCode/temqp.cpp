#include<bits/stdc++.h>
#include<vector>
using namespace std;
//solving through recurssion
void findCombinations(int idx, int target, vector<int> &a, vector<vector<int>> &ans, vector<int> &ds){
    cout<<a.size()<<endl;
    if(idx == a.size()){
        if(target==0){
            // cout<<target<<endl;
            ans.push_back(ds);
        }
        return;
    }
    if(a[idx] <= target){
        ds.push_back(a[idx]);
        findCombinations(idx, target - a[idx], a, ans, ds);
        ds.pop_back();
    }
    findCombinations(idx + 1, target, a, ans, ds);
}

vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {
    // Write your code here
    vector<vector<int>> ans;
    vector<int> ds;
    findCombinations(0, k, a, ans, ds);
    return ans;
}

int main(){
    int k, n;
    cin>>n>>k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        a.push_back(val);
    }

    vector<vector<int>> res;
    res = subarraysWithSumK(a, k);
    for(auto it:res){
        for (auto i : it)
            cout<<i<<" ";    
        cout<<endl;
    }

    return 0;
}