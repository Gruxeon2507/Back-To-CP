#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << n-1 << "\n";
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
