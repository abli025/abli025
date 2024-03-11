class Solution {
public:
    string customSortString(string order, string s) {
        int hash[26];
        std::string ans;
        memset(hash, 0, sizeof(hash));
        for (auto c : s) {
            hash[c-'a']++;
        }
        for (auto c : order) {
            while (hash[c-'a'] > 0) {
                ans.push_back(c);
                hash[c-'a']--;
            }
        }
        for (int i = 0; i < 26; i++) {
            while (hash[i] > 0) {
                ans.push_back(i +'a');
                hash[i]--;
            }
        }
        return ans;
    }
};