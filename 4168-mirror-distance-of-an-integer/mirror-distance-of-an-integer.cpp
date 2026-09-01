class Solution {
public:
    int mirrorDistance(int n) {
        int originalNum = n;
        long long reversedNum = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            reversedNum = reversedNum * 10 + lastDigit;
            n /= 10;
        }
        return abs(originalNum - reversedNum);
    }
};