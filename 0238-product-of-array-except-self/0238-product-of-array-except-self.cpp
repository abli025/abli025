class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      std::vector<int> prod(nums.size(),1);
      
      int temp = 1;
      for (int i = 0; i < nums.size(); i++) {
        prod[i] = prod[i] * temp;
        temp = temp*nums[i];
      }
      temp = 1;
      for (int i = nums.size()-1; i >= 0; i--) {
        prod[i] = prod[i] * temp;
        temp = temp * nums[i];
      }
      return prod;
    }
};