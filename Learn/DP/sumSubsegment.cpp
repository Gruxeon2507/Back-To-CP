#include <bits/stdc++.h>
#define ll long long
using namespace std;
int MOD=1000000007;
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> dp(1000001);
    for(int i=0;i<n;i++){
        cin >> a[i];
        // dp[a[i]]=1;
    }
    ll sum[n+1];
    sum[0]=0;
    for(int i=1;i<=n;i++){
        sum[i]=sum[i-1]+a[i-1];
    }
    set<ll> s;
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=1000001;j>=0;j--){
            if(j>=a[i]&&dp[j-a[i]]==1){
                dp[j]=1;
            }
        }
    }
    int count=0;
    for(int j=1;j<=1000000;j++){
        if(dp[j]==1){
            count++;
        }
    }
    cout << count << "\n";
     for(int j=1;j<=1000000;j++){
        if(dp[j]==1){
            cout << j << " ";
        }
    }
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