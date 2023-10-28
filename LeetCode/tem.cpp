#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool check(int n){
	int one = n%10, prod = 1;
	n /= 10;
	while(n>0){
		int rem = n%10;
		prod *= rem;
		n /= 10;
	}
	return one == prod;
}

int main(){
	int n;
	cin>>n;
	while(n){
		if(check(n)){
			cout<<n;
			return 0;
		}
		if(n<919)
			n++;
	}
	
	return 0;
}