class Solution {
public:
    int reverse(int x) {
        long long rev_num = 0;

        while (x != 0) {
            int last_digit = x % 10;
            rev_num = rev_num * 10 + last_digit;
            x /= 10;

            // Check for 32-bit signed integer overflow
            if (rev_num > INT_MAX || rev_num < INT_MIN) {
                return 0;
            }
        }

        return (int)rev_num;
    }
};