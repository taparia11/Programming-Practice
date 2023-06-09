// Problem Link => https://www.codechef.com/problems/TEKKEN
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int anna,bob,claudio;
        cin>>anna>>bob>>claudio;
        if(anna>bob && anna>claudio)
            cout<<"YES"<<endl;
        else if(anna> max(bob, claudio) - min(bob,claudio) )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}