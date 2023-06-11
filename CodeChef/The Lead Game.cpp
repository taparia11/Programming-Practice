// // Problem Link => https://www.codechef.com/problems/TLG

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int p1[t],p2[t],dp=0,dp2=0,x=0,y=0;
    for (int i = 0; i < t; i++)
    {
        cin>>p1[i]>>p2[i];
        p1[i] = p1[i] + x;
        p2[i] = p2[i] + y;
        if(p1[i]>p2[i]){
            if(dp<p1[i]-p2[i])
                dp2=1;
            dp = max(dp,p1[i]-p2[i]);
            
        }
        else{
            if(dp<p2[i]-p1[i])
                dp2=2;
            dp = max(dp,p2[i]-p1[i]);}
        x=p1[i];
        y=p2[i];
        
    }

    cout<<dp2<<" "<<dp;
    return 0;
}