#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	int A[n], B[n];
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	for(int i=0; i<n; i++){
		cin>>B[i];
	}
	int M;
	cin>>M;
	int L[M], R[M], P[M], Q[M];
	for(int i=0; i<M; i++){
		cin>>L[i];
	}
	for(int i=0; i<M; i++){
		cin>>R[i];
	}
	for(int i=0; i<M; i++){
		cin>>P[i];
	}
	for(int i=0; i<M; i++){
		cin>>Q[i];
	}
	int temp = M;

	for(int i=0; i<M; i++){
	int sum = 0;
		for (int j = L[i]; j <= R[i] ; j++)
		{
			for (int k = P[i]; k <= Q[i]; k++)
			{
				sum += A[j-1] | B[k-1];
			}
			
		}
		cout<<sum<<" ";
		
	}

	return 0;
}