class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return INT_MAX;  // Return maximum value to indicate division by zero
        }
        
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;  // Avoid overflow for this specific case
        }

        int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
        long long ldividend = abs((long long)dividend);
        long long ldivisor = abs((long long)divisor);

        long long quo = 0;

        while (ldividend >= ldivisor) {
            long long temp = ldivisor, multiple = 1;
            while (ldividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            ldividend -= temp;
            quo += multiple;
        }

        quo *= sign;

        if (quo > INT_MAX) {
            return INT_MAX;
        }

        return static_cast<int>(quo);
    }
};
