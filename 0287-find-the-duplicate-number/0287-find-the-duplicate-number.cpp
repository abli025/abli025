class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      std::map<int, int> mpp;
      int n = 0;
      for (auto num : nums) {
        mpp[num] = mpp[num] + 1;
        if (mpp.find(num) != mpp.end()) {
          if (mpp[num] >= 2) {
            n = num;
            break;
          }
        }
      }
      return n;
    }
};