class Solution {
public:
    int pivotInteger(int n) {
      if (n == 1) return 1;
      int leftSum = 1, rightSum = n;
      int left = 2, right = n-1;
      while (left <= right) {
        if (left == right && leftSum == rightSum) {
          return left;
        } else if (leftSum < rightSum) {
          leftSum += left;
          left++;
        } else {
          rightSum += right;
          right--;
        }
      }
      return -1;
    }
};