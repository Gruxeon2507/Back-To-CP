#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,n,s;
    cin >> a >> b >> n >> s;
    int temp = s%n;
    if(temp>b||a*n+b<s){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}