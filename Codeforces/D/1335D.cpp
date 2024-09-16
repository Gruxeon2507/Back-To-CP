#include <bits/stdc++.h>
#define int long long

using namespace std;
void solve() {
    string s[9];
    for(int i=0;i<9;i++){
        cin >> s[i];
        for(int j=0;j<9;j++){
            if(s[i][j]=='1'){
                s[i][j]='2';
            }
        }
        cout << s[i] << "\n";
    }
    

}
#undef int
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}