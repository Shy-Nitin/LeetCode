class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int cnt=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]) cnt++;
            else{
                if(cnt > nums.size()/3) ans.push_back(nums[i-1]);
                cnt=1;
            }
        }
        if(cnt > nums.size()/3)  ans.push_back(nums[nums.size()-1]);
        return ans;

    }
};