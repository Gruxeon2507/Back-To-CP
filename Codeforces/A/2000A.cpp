#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    if(s.length()>=3&&s[0]=='1'&&s[1]=='0'){
        if((s.length()>=4&&s[2]!='0')||s[2]>='2'){
            cout <<"YES\n";
        }else cout << "NO\n";
    }else{
        cout << "NO\n";
    }
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}