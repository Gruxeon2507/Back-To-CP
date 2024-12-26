#include <iostream>
using namespace std;

void solve() {
    int m,a,b,c;
    cin >> m >> a >> b >> c;
    int ans = 0;
    ans+=min(m,a)+min(m,b);
    int la = m - min(m,a),lb = m - min(m,b);
    ans+=min(la+lb,c);
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}
