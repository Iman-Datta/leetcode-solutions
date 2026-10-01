class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0)
            return false;

        long long num = x, reverse_num = 0;


        while (num > 0){
            long long digit = num % 10;
            reverse_num = reverse_num * 10 + digit;
            num /= 10;
        }

        return reverse_num == x;
    }
};