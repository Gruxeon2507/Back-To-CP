#include <bits/stdc++.h>
#define ll long long
using namespace std;
int MOD=1000000007;
void solve() {
    string a,b;
    cin >> a >> b;
    int dp[a.length()+1][b.length()+1];
    for(int i=0;i<=a.length();i++){
        for(int j=0;j<=b.length();j++){
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=a.length();i++){
        for(int j=1;j<=b.length();j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    // for(int i=1;i<=a.length();i++){
    //     for(int j=1;j<=b.length();j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    cout << dp[a.length()][b.length()];
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