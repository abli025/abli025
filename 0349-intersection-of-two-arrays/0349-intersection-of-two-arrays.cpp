class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::set<int> hash;
        std::vector<int> ans;
        for (const auto& n : nums1) {
            hash.insert(n);
        }
        for (auto x : hash) {
            std::cout << x << " ";
        }
        for (const auto& n : nums2) {
            if (hash.find(n) != hash.end()) {
                ans.push_back(n);
                hash.erase(n);
            }
        }
        return ans;
    }
};