class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx= *max_element(nums.begin(), nums.end());

        while(mn>0 && mx>0){        //gcd()
            if(mx>mn) mx = mx%mn;
            else mn = mn%mx;
        }
        return (mx==0) ? mn : mx;
    }
};