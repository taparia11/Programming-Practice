#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int maxElement = max_element(arr,arr+n);
    cout<<maxElement;

    
    return 0;
}