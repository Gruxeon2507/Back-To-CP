#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int ans=0;
    int sum=0;
    int i=1;
    while(sum<=n){
        sum+=i;
        ans++;
        i++;
    }
    cout << ans-1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}