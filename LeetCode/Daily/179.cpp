class Solution {
public:
    string largestNumber(vector<int>& nums){
        vector<string> s;
        for(auto num: nums){
            s.push_back(to_string(num));
        }
        sort(s.begin(),s.end(),[](string &a, string &b) {return (a+b)>(b+a);});
        if(s[0]=="0") return "0";
        string ans="";
        for(auto si:s){
            ans+=si;
        }
        return ans;
    }
};