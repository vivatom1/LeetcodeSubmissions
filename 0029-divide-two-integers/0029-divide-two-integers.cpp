class Solution {
public:
    int divide(int dividend, int divisor) {

        long long a = dividend;
        long long b = divisor;

        bool negative = (a < 0) ^ (b < 0);

        a = abs(a);
        b = abs(b);

        long long ans = 0;

        while (a >= b) {

            long long temp = b;
            long long count = 1;

            while (a >= (temp << 1)) {
                temp = temp << 1;
                count = count << 1;
            }

            a = a - temp;
            ans = ans + count;
        }

        if (negative)
            ans = -ans;

        if (ans > INT_MAX)
            return INT_MAX;

        if (ans < INT_MIN)
            return INT_MIN;

        return ans;
    }
};