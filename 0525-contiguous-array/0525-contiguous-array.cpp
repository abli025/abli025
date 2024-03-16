class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // When the sum is 0 it means we have equal number of 0's and 1's
      int sum = 0;
      int maxLen = 0;
      unordered_map<int, int> prefix;
      prefix[0] = -1;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
          sum--;
        } else {
          sum++;
        }
        if (prefix.find(sum) != prefix.end()) {
          maxLen = std::max(maxLen, i - prefix[sum]);
        } else {
          prefix[sum] = i;
        }
      }
      return maxLen;
    }
};