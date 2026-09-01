class Solution {
public:
    int getvalue(char c) {
        if (c == 'I')
            return 1;
        if (c == 'V')
            return 5;
        if (c == 'X')
            return 10;
        if (c == 'L')
            return 50;
        if (c == 'C')
            return 100;
        if (c == 'D')
            return 500;
        if (c == 'M')
            return 1000;
    return 0;
    }
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0; i < s.size()-1; i++) {
            int current = getvalue(s[i]);
            int next = getvalue(s[i + 1]);

            if (current < next) {
                ans -= current;
            } else {
                ans += current;
            }
        }
        ans += getvalue(s[s.size() - 1]);
        return ans;
    }
};