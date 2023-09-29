#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n] = {0};
    arr[0] = n-1;
    for (int i = 0; i < n-1; i++)
    {
        int a;
        cin>>a;
        arr[a-1]++;
        // cout<<a-1<<endl;

    }

    cout<<n-1<<" ";

    for (int i = 1; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}