class Solution {
public:
    int divide(int dividend, int divisor) {

        // Special overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Work with long long to safely handle INT_MIN
        long long a = dividend;
        long long b = divisor;

        // Determine the sign of the answer
        bool negative = (a < 0) ^ (b < 0);

        // Make both numbers positive
        if (a < 0) a = -a;
        if (b < 0) b = -b;

        long long ans = 0;

        while (a >= b) {

            long long temp = b;
            long long count = 1;

            // Keep doubling the divisor
            while (a >= temp + temp) {
                temp = temp + temp;
                count = count + count;
            }

            // Subtract the largest possible chunk
            a = a - temp;
            ans = ans + count;
        }

        if (negative)
            ans = -ans;

        return (int)ans;
    }
};