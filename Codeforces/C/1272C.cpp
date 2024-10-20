#include <iostream>
#include <vector>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<char> c(k);
    unordered_map<char,ll> m;
    for(int i=0;i<k;i++) {
        cin >> c[i];
        m[c[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(m[s[i]]!=0) s[i]=='1';
        else s[i]=='0';
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ll j=i;
        while(j<n&&m[s[j]]!=0){
            j++;
        }
        ll len =j-i;
        ans += len*(len+1)/2;
        i=j;
    }
    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
//    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
