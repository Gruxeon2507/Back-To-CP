#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> temp;
        for(vector<int> i:nums1){
            temp[i[0]]+=i[1];
        }
        for(vector<int> i:nums2){
            temp[i[0]]+=i[1];
        }
        vector<vector<int>> ans;
        for(auto i : temp){
            vector<int> temp2;
            temp2.push_back(i.first);
            temp2.push_back(i.second);
            ans.push_back(temp2);
        }
        return ans;
    }
};