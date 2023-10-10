#include <bits/stdc++.h>
#define ll long long
using namespace std;
int MOD=1000000007;
void solve() {
    int n,s;
    cin >> n >> s;
    int v[n+1],w[n+1];
    for(int i=1;i<=n;i++){
        cin >> w[i] >> v[i];
    }
    ll dp[n+1][s+1];
    dp[0][0]=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=w[i]){
                dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i][j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[n][s];
}
int main() {
    ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
    int t=1;
    // cin >> t;
    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // cin.clear();
    while (t--) {
        solve();
    }
 
    return 0;
}