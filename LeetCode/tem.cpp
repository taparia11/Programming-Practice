#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	if(x>y){
		if(x-y<=3)
			cout<<"Yes";
		else
			cout<<"No";
	}
	else{
		if(y-x<=2)
			cout<<"Yes";
		else
			cout<<"No";
	}
	return 0;
}