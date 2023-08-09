#include<bits/stdc++.h>
#include<vector>
using namespace std;

void print(vector<int> &res){
    for(int it:res)
      cout<<it<<" ";
    cout<<endl;
}

void subSequences(int k, int idx, int n, vector<int> &values, vector<int> &res, int &sum){
  if(idx>=n){
    if(sum == k)
      print(res);
    return;
  }
  res.push_back(values[idx]);
  sum += values[idx];
  subSequences(k, idx + 1, n, values, res, sum);
  res.pop_back();
  sum -= values[idx];
  subSequences(k, idx + 1, n, values, res, sum);
}

int main(){
  int n;
  cin>>n;
  vector<int> values,res;
  for(int i=0; i<n; i++){
    int val;
    cin>>val;
    values.emplace_back(val);
  }
  int k,sum=0;
  cin>>k;
  subSequences(k, 0, n , values, res, sum);
  return 0;
}