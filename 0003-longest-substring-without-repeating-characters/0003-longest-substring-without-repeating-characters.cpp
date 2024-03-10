class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> hash;
        int left = 0, right = 0;
        int maxLen = 0;
        while (left <= right && right < s.size()) {
            if (hash.find(s[right]) != hash.end()) {
              maxLen = std::max(right-left, maxLen);
              hash.erase(s[left]);  
              left++;
            } else {
              hash[s[right]] = 1;
              maxLen = std::max(right-left+1, maxLen);  
              right++;  
            }
        }
        return maxLen;
    }
};