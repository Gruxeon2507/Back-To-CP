#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0;
        int sum=0;
        int ans =1000000;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                sum-=nums[l];
                ans =min(ans,r-l+1);
                l++;
            }
            r++;
        }
        if(ans==1000000) return 0;
        else return ans;
    }
};