#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char,int> m;
    for(int i=0;i<4*n;i++) {
        m[s[i]]=0;
    }
    for(int i=0;i<4*n;i++) m[s[i]]++;
    int ans=0;
    for(auto& it:m){
//        cout << it.first << " " << it.second  << endl;
        if(it.second<=n&&it.first!='?'){
            ans+=it.second;
        }else{
            if(it.first!='?') ans+=n;
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
