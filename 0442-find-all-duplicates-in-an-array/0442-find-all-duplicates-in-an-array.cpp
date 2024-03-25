class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
          int num = abs(nums[i]);
          nums[num - 1] = -nums[num - 1];
          if(nums[abs(nums[i])-1] > 0) {
            ans.push_back(abs(nums[i]));
          }
        }
        return ans;
    }
};