#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y; 
	    cin>>x>>y;
	    x = int(x/y);
	    cout<<(x>=20?20:x)<<endl;
	    
	}
	return 0;
}
