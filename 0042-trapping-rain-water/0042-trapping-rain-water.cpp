class Solution {
public:
    int trap(vector<int>& arr) {
        int n= arr.size();
        int left=0; int right=n-1;
        int leftMax=0; int rightMax=0; int water=0;

        while(left<right){
            if(arr[left] < arr[right]){
                leftMax = max(leftMax,arr[left]);
                water+= leftMax-arr[left];
                left++;
            }
            else{
                rightMax = max(rightMax,arr[right]);
                water+= rightMax-arr[right];
                right--;
            }
        }
        return water;
    }
};