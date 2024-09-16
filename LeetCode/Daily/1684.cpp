class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int a['z'+1] ={0};
        for(int i=0;i<allowed.length();i++){
            a[allowed[i]]++;
        }
        int ans =words.size();
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                if(a[words[i][j]]==0){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};