#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

bool checkPrime(int n){
	for (int i = 2; i<= n/2; i++)
	{
		if(n%i==0)
			return false;
	}

	string s = to_string(n);
	int i=0, j = s.length()-1;
	while(i<=j){
		if(s[i]!=s[j])
			return false;

		i++; j--;
	}

	return true;
}

bool checkCount(int n){
	string s =to_string(n);
	return s.size()%2 == 0? true:false;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
		vector<int> prime;
	    for (int i = 2; prime.size() < n; i++)
		{
			if(checkPrime(i)){
				prime.emplace_back(i);
			}
		}
		int even=0, odd=0;

		for (int i = 0; i < n; i++)
		{
			if(checkCount(prime[i]))
				even++;
			else
				odd++;
		}
		
		
	    cout<<even<<" "<<odd<<endl;
	    
	}
	return 0;
}
