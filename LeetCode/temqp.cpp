#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int maxElement=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>arr[maxElement])
            maxElement = i;
    }
    cin>>k;
    if(n==0){
        cout<<0;
        return 0;
    }

    if(n<k){
        cout<<1;
        return 0;
    }
    k = k-1;
    int beforeElements = maxElement, afterElements = n - maxElement -1;
    int temp=maxElement,res=0;
    while(true){
        if(temp>=n-1)   break;
        temp = temp + k;
        res++;
    }
    temp = maxElement;
    while(true){
        if(temp<=0)  break;
        temp = temp - k;
        res++;
    }

    int valCheck = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i-1]==arr[i]) 
            valCheck++;
    }
    // cout<<valCheck<<n-1;
    if(valCheck == n-1)
        res =0;
    
    cout<<res;
    return 0;
}