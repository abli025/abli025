class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
      std::unordered_map<int, int> mpp;
      int left = 0, right = 0, maxLen = 0;
      while (left <= right && right < nums.size()) {
        mpp[nums[right]] += 1;
        while (mpp[nums[right]] > k) {
          mpp[nums[left]]-=1;
          left++;
        }
        maxLen = std::max(maxLen, right-left+1);
        right++;
      }
      return maxLen;
    }
};