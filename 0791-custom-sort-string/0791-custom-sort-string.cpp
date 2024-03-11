class Solution {
public:
    string customSortString(string order, string s) {
        int hash[26] = {0};
        std::string ans;
        //memset(hash, 0, sizeof(hash));
        // step 1 : push string s occurance to hash
        for (auto c : s) {
            hash[c-'a']++;
        }
        // step 2 : for every order string char
        //          reduce the count of string s and add to result
        for (auto c : order) {
            while (hash[c-'a'] > 0) {
                ans.push_back(c);
                hash[c-'a']--;
            }
        }
        // step 3: loop thru rest of the char with occurance
        for (int i = 0; i < 26; i++) {
            while (hash[i] > 0) {
                ans.push_back(i +'a');
                hash[i]--;
            }
        }
        return ans;
    }
};