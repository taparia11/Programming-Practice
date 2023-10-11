#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int hours;
	cin>>hours;
	if(hours<3)
	    cout<<"GOLD";
    else if(hours>=3 && hours<6)
	    cout<<"SILVER";
	else
	    cout<<"BRONZE";
	return 0;
}
