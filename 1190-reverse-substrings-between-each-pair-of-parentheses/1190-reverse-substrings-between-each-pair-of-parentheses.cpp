class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        stack<int> st;
        vector<int> pair_idx(n);

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                int j = st.top();
                st.pop();
                pair_idx[i] = j;
                pair_idx[j] = i;
            }
        }

        string result = "";
        int step = 1;

        for (int i = 0; i < n; i += step) {
            if (s[i] == '(' || s[i] == ')') {
                i = pair_idx[i];
                step = -step;
            } else {
                result += s[i];
            }
        }
        return result;
    }
};
