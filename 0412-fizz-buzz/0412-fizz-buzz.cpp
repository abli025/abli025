class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<std::string> ans;
        for (int i = 1; i <= n; i++) {
            int imod3 = i%3;
            int imod5 = i%5;
            if (!imod3 && !imod5) {
                ans.push_back("FizzBuzz");
            } else if (!imod3) {
                ans.push_back("Fizz");
            } else if(!imod5) {
                ans.push_back("Buzz");
            } else {
                ans.push_back(std::to_string(i));
            }
        }
        return ans;
    }
};