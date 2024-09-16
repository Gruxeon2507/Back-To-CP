class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        return decimalToBinary(ans);
    }

    int decimalToBinary(int n) {
        if (n == 0) return 0;
        int ans=0;
        while (n > 0) {
            ans = ans + n%2;
            n /= 2;
        }
        return ans;
    }
};