class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int longCommonPrefix = INT_MAX;
        for (int i = 1; i < strs.size(); i++) {
            int prefixLen = 0;
            for (int j = 0; j < strs[i].size(); j++) {
                if (strs[0][j] == strs[i][j]) {
                    prefixLen++;
                } else {
                    break;
                }
            }
            longCommonPrefix = std::min(longCommonPrefix, prefixLen);
        }
        return strs[0].substr(0, longCommonPrefix);
    }
};