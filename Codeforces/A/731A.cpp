#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int ans=0;
    ans+=min(abs(s[0]-'a'), 26 - abs(s[0]-'a'));
    char current = s[0];
    for(int i=1;i<s.length();i++){
        ans+=min(abs(s[i]-current), 26 - abs(s[i]-current));
        current=s[i];
    }
    cout << ans <<endl;
}

int main() {
    int t;
//    cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}

