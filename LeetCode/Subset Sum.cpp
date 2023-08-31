// Problem Link => https://www.codingninjas.com/studio/problems/subset-sum_3843086?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

void subSequences( int idx, int n, vector<int> &values, vector<int> &res, int sum){
  if(idx>=n){
    res.push_back(sum);
    return;
  }
  sum += values[idx];
  subSequences(idx + 1, n, values, res, sum);
  sum -= values[idx];
  subSequences(idx + 1, n, values, res, sum);
}

vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	vector<int> ans;
	subSequences(0, num.size(), num, ans, 0);
	sort(ans.begin(), ans.end());
	return ans;	
}