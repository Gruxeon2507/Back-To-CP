#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i=0,j=nums.size()-1;
        for(int k=0;k<nums.size();k++){
            if(nums[k]%2==0){
                ans[i]=nums[k];
                i++;
            }else{
                ans[j]=nums[k];
                j--;
            }
        }
        return ans;
    }
};