#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int ans=0;
    int count=0;
    while(n--){
        ans++;
        if(ans%k==0){
            n++;
        }

    }
    cout << ans << endl;

}
int main() {
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}