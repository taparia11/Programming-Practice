#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int p;
    for (int i = 0; i < n; i++)
    {
        if(target==arr[i])
            p = i;
    }
    cout<<p;
    
    return 0;
}