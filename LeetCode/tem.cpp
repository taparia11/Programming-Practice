#include<bits/stdc++.h>
#include<vector>
using namespace std;

int findMinCost(int n){
	int sum = 0;
	for (int i = 2; i <=n; )
	{
		if(n==1)
			break;
		if(n%i==0){
			n = n/i;
			sum += i;
		}
		else{
			i++;
		}
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<findMinCost(n);
	}
	return 0;
}