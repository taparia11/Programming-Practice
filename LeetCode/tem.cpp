#include<bits/stdc++.h>
#include<vector>
using namespace std;

int check(int i, int n, string s){
	int checkVal = i;
	while(checkVal<n){
		if(s[checkVal] <= 122 && s[checkVal] >= 97){
			break;
		}
		else
			checkVal++;	
	}
	return checkVal;
}

void solve(int idx, int n, string s, int &count, int dots, bool &posible){
	if(idx >= n){
		if(dots == 0){
			count++;
		}
			return;
	}
	for(int i=idx; i<n; i++){
		if(s[i] == '.'){
			if(i == 0){
				int checkVal = check(i, n, s);
				if(checkVal == n){
					int val = 97;
					if(val <= 0){
						posible = false;
						return;
					}
					for(int j=0; j<val; j++){
						s[i] = 97 + j;
						solve(i+1, n, s, count, dots-1, posible);
					}
				}
				else {
					int val = s[i+1] - 97;
					if(val <= 0){
						posible = false;
						return;
					}
					for(int j=0; j<val; j++){
						s[i] = 97 + j;
						solve(i+1, n, s, count, dots-1, posible);
					}
				}
			}
			else if(i == n-1){
				int val = 122 - s[i-1];
				if(val <= 0){
					posible = false;
					return;
				}
				for(int j=1; j<=val; j++){
					s[i] = s[i-1] + j;
					solve(i+1, n, s, count, dots-1, posible);
				}
			}
			else{
				int checkVal = check(i, n, s);
				if(checkVal == n){
					int val = 122 - s[i-1];
					if(val<=0){
						posible = false;
						return;
					}
					for(int j = 1; j<=val; j++){
						s[i] =  s[i-1] + j;
						solve(i+1, n, s, count, dots-1, posible);
					}
				}
				else{
					int val = s[checkVal] - s[i-1];
					if(val<=0){
						posible = false;
						return;
					}
					for(int j = 1; j<val; j++){
						s[i] =  s[i-1] + j;
						solve(i+1, n, s, count, dots-1, posible);
					}
				}
			}
		}
		else if(i == n-1){
			solve(i+1, n, s, count, dots, posible);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count = 0;
		int dots = 0;
		bool posible = true;
		for(int i=0; i<n; i++){
			if(s[i] == '.')
				dots++;
		}
		solve(0, n, s, count, dots, posible);
		// if(posible == false)
		// 	cout<<"0\n";
		// else
			cout<<count<<endl;
	}
	
	return 0;
}