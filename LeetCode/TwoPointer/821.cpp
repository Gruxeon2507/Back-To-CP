#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                ans.push_back(0);
                continue;
            }
            bool found1= false;
            int count1=0;
            int j=i;
            while(j>=0){
                if(s[j]==c){
                    found1=true;
                    break;
                }
                count1++;
                j--;
            }
            bool found2= false;
            int count2=0;
            j=i;
            while(j<s.size()){
                if(s[j]==c){
                    found2=true;
                    break;
                }
                j++;
                count2++;
            }
            if(found1&&found2)
                ans.push_back(min(count1,count2));
            else if(found1) ans.push_back(count1);
            else if(found2) ans.push_back(count2);
        }
        return ans;
    }
};