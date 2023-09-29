#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin>>s[i];
    vector<int> res;
    for (int i = 0; i < n; i++)
    {   int ans = 0,flag=0;
        for (int j = 0; j < s[i].length(); j++)
        {   if(s[i][j]>=48 && s[i][j]<=57){
                ans  = ans*10 + (s[i][j] - 48);
                flag =1;    
            }
        }
        if(flag==0)
            ans = s[i].length();
        res.push_back(ans);
    }
    int ans = 1;
    for(auto it:res)
        ans = ans * it;
    cout<<ans;
    return 0;
}