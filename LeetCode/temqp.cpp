#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;
    ans.emplace_back(5);
    ans.emplace_back(7);
    ans.emplace_back(2);
    ans.emplace_back(9);

    for(auto it: ans)
        cout<<it<<endl;
    return 0;
}