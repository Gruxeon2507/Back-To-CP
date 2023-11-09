#include <bits/stdc++.h>
#define int long long
int MOD = 1000000007;
using namespace std;
void solve() {
    int n, m;
	cin >> n >> m;
	if (m == 1) cout << 0 << '\n';
	else if (n > m - 1) cout << m << '\n';
	else cout << n + 1 << '\n';
	for (int i = 0; i < min(m - 1, n); i++) {
		for (int j = 0; j < m; j++) {
			cout << (j + i) % m << ' ';
		}
		cout << '\n';
	}
	if (n > m - 1) {
		for (int i = m - 1; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << j << ' ';
			}
			cout << '\n';
		}
	}
	return;
}
#undef int
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}