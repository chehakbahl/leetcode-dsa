class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int len = 0, max_len = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            if (s[i] == ')') {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                } else {
                    len = i - st.top();
                    max_len = max(max_len, len);
                }
            }
        }

        return max_len;
    }
};