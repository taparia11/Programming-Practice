#include<iostream>
#include<vector>			
using namespace std;

int main(){
	vector<int> arr;
	arr.push_back(4);
	arr.push_back(4);
	arr.push_back(3);
	arr.push_back(4);
	arr.pop_back();

	for(auto it:arr){
		cout<<it<<" ";
	}
	return 0;
}