#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(360%(180-n)==0) cout <<"YES" <<endl;
    else cout <<"NO" <<endl;
}
int main() {
    int t;
    std::cin >> t;
//    t=1;
    while (t--) {
        solve();
    }

    return 0;
}
