#include <bits/stdc++.h>
#define int long long
int MOD = 1000000007;
using namespace std;
void solve() {
    int q,d;
    cin >> q >> d;
    int arr[d];
    bool dp[207];
    for(int i=0;i<207;i++){
        dp[i]=0;
    }
    dp[0]=1;
    if(d==0)d+=10;
    int mx =d*10;
    for(int i=0;i*10+d<=mx;i++){
        for(int j=0;10*i+d+j<=mx;j++){
            dp[10*i+d+j]|=dp[j];
        }
    }
    while (q--)
    {
        int u;
        cin >> u;
        if(u>=mx||dp[u]) cout << "YES\n";
        else cout << "NO\n";
    }
    
}
#undef int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}