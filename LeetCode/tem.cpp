#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        int sum=0;
        int *arr = (int*)malloc(n*sizeof(int));
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
         if(sum%2!=0){
            cout<<"No"<<endl;
            continue;
         }
         int temp = sum/n;
         if(sum%n==0 && temp%2==0){
            cout<<"Yes"<<endl;
            continue;
         }
        
	    cout<<"No"<<endl;
	    
	}
	return 0;
}
