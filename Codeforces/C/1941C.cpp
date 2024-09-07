#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    int ans =0;
    for(int i=0;i<n-2;i++){
        if(i<n-4&&s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'&&s[i+3]=='i'&&s[i+4]=='e'){
            ans++;
            i+=3;
        }
        if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p') ans++;
        if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e') ans++;
    }
    cout << ans << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}