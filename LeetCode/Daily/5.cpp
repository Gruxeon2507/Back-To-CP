#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";

        bool dp[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=false;
            }
        }
        int start = 0;
        int maxLen = 1; 

        for (int i = 0; i < n; ++i) {
            dp[i][i] = true; 
            for (int j = 0; j < i; ++j) {
                if (s[j] == s[i] && (i - j < 2 || dp[j + 1][i - 1])) {
                    dp[j][i] = true;

                    if (i - j + 1 > maxLen) {
                        maxLen = i - j + 1;
                        start = j;
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};