#include <iostream>
#include <vector>

using namespace std;

int max_alternating_subarray_length(vector<int> nums) {
  int max_length = 1;
  int current_length = 1;
  int prev_num = nums[0];
  for (int i = 1; i < nums.size(); i++) {
    if ((nums[i - 1] ^ nums[i]) == 1) {
      current_length++;
    } else {
      current_length = 1;
    }
    max_length = max(max_length, current_length);
  }
  return max_length == 1 ? -1 : max_length;
}

int main() {
  vector<int> nums = {2, 3, 4, 3, 4};
  int max_length = max_alternating_subarray_length(nums);
  cout << max_length << endl;
  return 0;
}
