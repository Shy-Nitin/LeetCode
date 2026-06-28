class Solution {
public:
    bool rotateString(string s, string g) {
        if(s.size() != g.size()) return false;
        string s2 = s+s;
       
        return s2.find(g) != string::npos;

    }
};