#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1]){
            cout << "YES" << endl;
            char t=s[i];
            s[i]=s[i+1];
            s[i+1]=t;
            cout << s << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}