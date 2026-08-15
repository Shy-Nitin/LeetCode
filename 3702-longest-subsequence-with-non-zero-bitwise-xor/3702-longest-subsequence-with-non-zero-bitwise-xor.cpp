class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total = 0; int n = nums.size();
        bool nonZero = false;

        for(int& num:nums){
            nonZero |= num > 0;
            total ^= num;
        }
        if(total != 0) return n;
        if(nonZero) return n - 1;
        return 0;
    }
};