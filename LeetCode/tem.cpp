#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
		string chefp, chefinap;
		cin>>chefp;
		cin>>chefinap;
		int chef = 0, chefina = 0, draw=0;
		for(int i=0; i<n; i++){
			// S s r p
			// P s r p
			// R s r p
			if(chefp[i] == 'S' && chefinap[i] == 'P')
				chef++;
			else if(chefp[i] == 'P' && chefinap[i] == 'R')
				chef++;
			else if(chefp[i] == 'R' && chefinap[i] == 'S')
				chef++;
			else if(chefp[i] == chefinap[i])
				draw++;
		}
		chefina = n - draw - chef;
		if(chef>chefina)
	    	cout<<0<<endl;
		else if(chef==chefina)
	    	cout<<1<<endl;
		else{
			draw = 0;
			while(chef <= chefina){
				draw++;
				chef++;
				chefina--;
			}
			cout<<draw<<endl;
		}
	    
	}
	return 0;
}
