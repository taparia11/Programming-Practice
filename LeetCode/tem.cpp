#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *ans = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        cin>>ans[i];
    }
    sort(ans, ans+n);
    int m = *max_element(ans, ans+n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += ((ans[i]) * (i+1)) + m;
    }

    cout<<sum;
    
    return 0;
}