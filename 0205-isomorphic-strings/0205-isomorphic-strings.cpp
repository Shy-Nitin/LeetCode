class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> first;
        unordered_map<char, char> second;
        int m = s.size() , n = t.size();
        if(m != n) return false;
        for(int i=0; i<n; i++){
            if(first.count(s[i])){
                if(first[s[i]] != t[i]) return false;
            }
            else first[s[i]] = t[i];

            if(second.count(t[i])){
                if(second[t[i]] != s[i]) return false;
            }
            else second[t[i]] = s[i];
        }
        return true;
    }
};