class Solution {
public:
    bool checkPerfectNumber(int n) {
        int num = n, sum = 0;

        for(int i = 1; i < num; i++){
            if(num % i == 0){
                sum += i;
            }
        }

        return n == sum;
    }
};