#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            if(s1[i]=='R'||s2[i]=='R'){
                cout << "NO" << endl;
                return;
            }

        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin>>t;
//    t=1;
    while(t--){
        solve();
    }
    return 0;
}

