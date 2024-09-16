#include <bits/stdc++.h>
using namespace std;
void solve(){
    char a;
    cin >> a;
    string s= "codeforces";
    bool check = false;
    for(int i=0;i<s.length();i++){
        if(s[i]==a){
            check=true;
            break;
        }
    }
    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}