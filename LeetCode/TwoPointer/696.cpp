#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            char temp = s[i];
            int countTemp=1;
            int j;
            for(j=i+1;j<s.size();j++){
                if(s[j]==temp) ++countTemp;
                else{
                    break;
                }
            }
            i=j-1;
            int countOp=0;
            for(;countOp<countTemp&&j<s.size();j++){
                if(s[j]!=temp) ++countOp;
                else{
                    break;
                }
            }
            ans+=countOp;

        }
        return ans;
    }
};