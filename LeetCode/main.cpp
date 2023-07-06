#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> a(nums.size()+1);
        a[0]=0;
        for(int i=1;i<nums.size()+1;i++){
            a[i]=a[i-1]+nums[i-1];
        }
        int ans=nums.size()+1;
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                if(a[j]-a[i]>=target && j-i<ans){
                    ans = j-i;
                }
            }
        }

        if(ans==a.size()+1) return 0;
        else return a[nums.size()+1];
    }
};