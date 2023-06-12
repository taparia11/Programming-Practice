#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    int t;
	cin>>t;
	while(t--){
		int n,temp=0;
		cin>>n;
		int arr[n]={0};
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<int> ar;
		for (int i = 0; i < n; i++)
		{
			if(arr[i]>=temp){
				ar.emplace_back(arr[i]);
				temp=arr[i];

			}
			else if(arr[i]<=arr[0] && arr[i]!=1){
				ar.emplace_back(arr[i]);
			}
		}
		int j=0;
		for (int i = 0; i < n; i++)
		{
			if(arr[i] == ar[j]){
				arr[i]=1;
				j++;
			}
			else
				arr[i] = 0;
		}
		
		for (int i = 0; i < n; i++)
		{
			cout<<arr[i];
		}
		cout<<endl;
		
	}
    return 0;
}


