class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, i = s.size()-1;
        while(i >= 0) {
            if (s[i] == ' ') {
                if (len == 0) {
                    i--;
                    continue;
                }
                return len;
            }
            len++;
            i--;
        }
        return len;
    }
};