#include<bits/stdc++.h>
using namespace std;

int main(){
    	int t;
        cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    cout<<((a+b)%2==0?"YES":"NO")<<endl;
	}
    return 0;
}