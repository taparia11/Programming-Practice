#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    int rem = a%7;
	    a = a/7;
	    a = rem>1?a+1:a;
	    cout<<a<<endl;
	    
	}
	return 0;
}
