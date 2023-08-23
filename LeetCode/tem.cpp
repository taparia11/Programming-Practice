#include<bits/stdc++.h>
#include<vector>
using namespace std;

long getScoreDifference(vector<int> points){
	priority_queue<int> p;
	for(int i=0; i<points.size(); i++){
		p.push(points[i]);
	}
	return p.top();
}

int main(){
	int n;
	cin>>n;
	vector<int> points(n);
	for(int i=0; i<n; i++){
		cin>>points[i];
	}
	cout<<getScoreDifference(points);
	return 0;
}