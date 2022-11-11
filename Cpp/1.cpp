#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    x=x*2;
	    y=y*5;
	    if(x<y){
	        cout<<"Candy"<<endl;
	    }
	    else if(x>y){
	        cout<<"Chocolate"<<endl;
	    }
	    else{
	        cout<<"Either"<<endl;
	    }
	}
	return 0;
}
