#include<bits/stdc++.h>
using namespace std;

int main() {
	clock_t start_time = clock();
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
			if(n==x || n-1==x+1 || n+3==x-1)
				cout<<"YES"<<endl;
			else
	        	cout<<"NO"<<endl;

	}
	clock_t end_time1 = clock();
	clock_t result = end_time1 - start_time;
	cout<<result<<" milliseconds"<<endl;
	cout<<result/CLOCKS_PER_SEC<<" seconds"<<endl;
	return 0;
}
