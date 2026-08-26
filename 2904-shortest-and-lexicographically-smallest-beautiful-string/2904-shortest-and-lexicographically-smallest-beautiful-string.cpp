class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        int ones = 0;
        int bestLen = INT_MAX;
        string ans = "";

        for (int right = 0; right < s.size(); right++) {
            if (s[right] == '1')
                ones++;

            while (ones == k) {
                int len = right - left + 1;
                string curr = s.substr(left, len);

                if (len < bestLen || (len == bestLen && curr < ans)) {
                    bestLen = len;
                    ans = curr;
                }
                
                if (s[left] == '1') ones--;
                left++;
            }
        }
        return ans;
    }
};

