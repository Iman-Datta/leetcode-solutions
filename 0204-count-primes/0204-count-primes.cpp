class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);

        // 2 is the only even prime
        int count = 1 + (n - 2) / 2;

        for (int i = 3; i * i < n; i += 2) {

            if (isPrime[i]) {

                // Only mark odd multiples
                for (int j = i * i; j < n; j += 2 * i) {

                    if (isPrime[j]) {
                        isPrime[j] = false;
                        count--;
                    }
                }
            }
        }

        return count;
    }
};