#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string> &words) {
        for (int i = 0; i < words.size(); i++) {
            string temp = words[i];
            reverse(words[i].begin(), words[i].end());
            if (temp.compare(words[i]) == 0) {
                return temp;

            }


        }
        return "";
    }
};