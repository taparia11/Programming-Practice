#include <iostream>
#include <vector>

using namespace std;

// Funtion for mex alternating subarray legth
int max_alternating_subarray_length(vector<int> nums)
{
  int count=0;
  for(int i=1;i<=nums.size();i++){
    if(nums[i-1]==i)
      count++;
  }
  
  return count>1?count-1:count==1?1:0;
}

// Driver code
int main()
{
  int t;
  cin >> t;
  while(t--){
    int a, n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      nums.push_back(a);
    }

    int max_length = max_alternating_subarray_length(nums);
    cout << max_length << endl;
  }
  return 0;
}
