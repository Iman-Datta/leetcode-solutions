class Solution {
public:
    int reverse(int x) {
        long long num = abs((long long)x);
        long long reverse_num = 0;

        while (num > 0) {
            long long dig = num % 10;
            reverse_num = reverse_num * 10 + dig;
            num = num / 10;
        }

        if (x < 0) {
            reverse_num = -reverse_num;
        }

        if (reverse_num < INT_MIN || reverse_num > INT_MAX) {
            return 0;
        }

        return (int)reverse_num;
    }
};