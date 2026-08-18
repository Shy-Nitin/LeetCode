class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int freq[51] = {0};
        for (int& i : nums)
            ++freq[i];

        int ans = -1;
        for (int i = 0; i < n; ++i) {
            if (k == n) {
                ans = max(ans, nums[i]);
            }
            else if (freq[nums[i]] == 1) {
                if (k == 1) {
                    ans = max(ans, nums[i]);
                }
                else if (i == 0 || i == n - 1) {
                    ans = max(ans, nums[i]);
                }
            }
        }
        return ans;
    }
};
