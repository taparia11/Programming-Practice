#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--)
	{
		int x,y,k;
		cin>>x>>y>>k;
		if(x>=y)
			cout<<x<<endl;
		else if(y>x){
			int val = y-x;
			if(k>val){
				y = x + val;
			}
			else{
			x = x+k;
			y = y - x;
			y = x + 2*y;
			}
			cout<<y<<endl;
		}
	}
	
	return 0;
}