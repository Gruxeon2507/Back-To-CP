class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max=nums[0];
        for(auto &num:nums){
            if(max<num){
                max=num;
            }
        }
        int ans=0;
        int temp=0;
        for(auto &num:nums){
            if(num==max){
                temp++;
                if(temp>ans){
                    ans=temp;
                }
            }else{
                temp=0;
            }
        }
        return ans;
    }
};