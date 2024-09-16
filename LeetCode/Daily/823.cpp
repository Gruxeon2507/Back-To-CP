#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int MOD = 1000000007;
        sort(arr.begin(),arr.end());
        set<int> s;
        map<int,int> dp;
        for(int i:arr){
            dp[i]=1;
            s.insert(i);
        }
        for(int i:arr){
            for(int j:arr){
                if(j>sqrt(i)) break;
                if(i%j==0&&s.find(i/j)!=s.end()){
                    long long temp = (long long)dp[j]*(long long)dp[i/j];
                    if(i/j==j){
                        dp[i]=((long long)dp[i]+temp)%MOD;
                    }else{
                        dp[i]=((long long)dp[i]+temp*2)%MOD;
                    }
                }
            }
        }
        int ans=0;
        for(auto i:s){
            ans=(ans+dp[i])%MOD;
        }
        return ans;
    }
};