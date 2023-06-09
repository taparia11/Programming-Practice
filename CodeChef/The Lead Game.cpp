// // Problem Link => https://www.codechef.com/problems/TLG

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int p1[t],p2[t],dp1=0,dp2=0;
    for (int i = 0; i < t; i++)
    {
        cin>>p1[i]>>p2[i];
        if(p1[i]>p2[i] && p1[i]-p2[i]>dp1)
            dp1=p1[i]-p2[i];
        else if(dp2>p2[i]-p1[i])
            dp2=p2[i]-p1[i];
        
    }

    dp1>dp2?cout<<"1 "<<dp1:cout<<"2 "<<dp2;    
    
    return 0;
}