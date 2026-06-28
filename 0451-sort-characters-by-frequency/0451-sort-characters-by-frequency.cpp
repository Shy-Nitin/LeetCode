class Solution {
public:
    static bool cmp(pair<char,int> &a, pair<char,int>&b) {
        return a.second > b.second;
    }

    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto ch: s) mp[ch]++;
        vector<pair<char,int>> freq(mp.begin(), mp.end());
        sort(freq.begin(), freq.end() , cmp);

        string ans="";
        for(auto ch: freq){
            for(int i=0; i< ch.second; i++) ans += ch.first;
        }

        return ans;
    }
};