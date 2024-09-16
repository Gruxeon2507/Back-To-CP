#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i]>'4'){
            if(i==0 && s[i]=='9')continue;
            else
                s[i]='0'+'9'-s[i];
        }
    }
    cout << s << endl;
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

