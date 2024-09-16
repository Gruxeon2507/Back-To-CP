#include <bits/stdc++.h>
#define int long long

using namespace std;
void solve() {
    string s;
    cin >> s;
    map<char,int> m;
    set<char> se;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
        se.insert(s[i]);
    }
    int odd=0,even=0;
    for(auto c: se){
        if(m[c]%2!=0){
            if(s.length()%2!=0){
                cout << "First\n";
                return;
            }else{
                cout << "Second\n";
                return;
            }
        }
    }
    cout << "First" << endl;
}
#undef int
int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}