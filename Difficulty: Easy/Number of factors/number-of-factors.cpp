class Solution {
public:
    int countFactors(int n) {
        if (n == 1) return 1;
        int count = 0;
        for (int i = 1; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                if (n / i == i) {
                    count++;
                } else {
                    count += 2;
                }
            }
        }
        return count;
    }
};