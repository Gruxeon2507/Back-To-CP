#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(i==j){
                ans+=nums[i];
                i++;
                j--;
                continue;


            }
            string temp = to_string(nums[i])+ to_string(nums[j]);
            ans+= stoi(temp);
            i++;
            j--;
        }
        return ans;

    }
};