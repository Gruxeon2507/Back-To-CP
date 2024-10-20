class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n=s.length();
        int mask=0, ans=0;
        unordered_map<int,int> m;
        m[0]=-1;
        for(int i=0;i<n;i++){
            switch (s[i]){
                case 'a':
                    mask ^= (1<<0);
                    break;
                case 'e':
                    mask ^= (1<<1);
                    break;
                case 'i':
                    mask ^= (1<<2);
                    break;
                case 'o':
                    mask ^= (1<<3);
                    break;
                case 'u':
                    mask ^= (1<<4);
                    break;
            }
            if(m.find(mask) != m.end()){
                ans = max(ans,i-m[mask]);
            }else{
                m[mask]=i;
            }
        }
        return ans;
    }
};