#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int ans=0;
    for(int i=2;i<=n;i++){
        if(n%i==0) ans++;
    }
    cout << ans << endl;
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

