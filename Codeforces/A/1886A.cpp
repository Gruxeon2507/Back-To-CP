#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%3==0) continue;
        for(int j=1;j<=n-i;j++){
            if(j%3==0) continue;
            int k = n-i-j;
            if(k%3==0) continue;
            if(i!=j&&j!=k&&k!=i){
                cout << "YES\n";
                cout << i << " " << j << " " << k << "\n"; 
                return;
            }
        }
    }
    cout << "NO\n";
}
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}