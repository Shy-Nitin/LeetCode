class Solution {
public:
    int totalH(vector<int>& v, int hour){
        int totalH=0; int n = v.size();
        for(int i=0;i<n;i++){
            totalH += ceil((double)v[i]/(double) hour);
        }
        return totalH;
    }
    
    
    int minEatingSpeed(vector<int>& arr, int h) {
        int low=1; int high= *max_element(arr.begin(),arr.end());
        while(low<high){
            int mid=low+(high-low)/2;
            int totalhours = totalH(arr,mid);
            if(totalhours <= h){
                high= mid;
            }
            else low=mid+1;
        }
        return low;
    }
};