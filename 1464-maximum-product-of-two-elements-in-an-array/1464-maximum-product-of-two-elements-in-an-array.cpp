class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = *max_element(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == first){
                nums[i] = 0;
                break;
            }     
        }
        int second = *max_element(nums.begin(), nums.end());
        return (first-1)*(second-1);
    }
};