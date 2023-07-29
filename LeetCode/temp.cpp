#include <iostream>
#include <vector>

using namespace std;

// Funtion for mex alternating subarray legth
int swapCount(vector<int> nums)
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

    int max_Swap = swapCount(nums);
    cout << max_Swap << endl;
  }
  return 0;
}
