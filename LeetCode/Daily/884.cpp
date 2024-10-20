class Solution {
public:
    vector<string> toArray(string &s){
        stringstream ss(s);
        vector<string> res;
        while(!ss.eof()){
            string tmp;
            ss>>tmp;
            res.push_back(tmp);
        }
        ss.clear();
        return res;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> v1=toArray(s1);
        vector<string> v2=toArray(s2);
        unordered_map<string,int> m;
        for(auto& s:v1) m[s]++;
        for(auto& s:v2) m[s]++;
        vector<string> ans;
        for(auto& [s,f]: m){
            if(f==1) ans.push_back(s);
        }
        return ans;
    }
};