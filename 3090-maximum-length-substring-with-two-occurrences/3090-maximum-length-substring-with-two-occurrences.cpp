class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0; int right=0;
        int maxLen = 0; unordered_map<int,int> mp;
        
        while(right<s.size()){
            int current = s[right];
            mp[s[right]]++;

            while(mp[s[right]] > 2){
                mp[s[left]]--; left++;
            }
            maxLen = max(maxLen, right-left+1);
            right++;
        }
        return maxLen;
        
    }
};