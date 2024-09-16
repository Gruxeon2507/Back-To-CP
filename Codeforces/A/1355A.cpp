#include <bits/stdc++.h>
#define int long long

using namespace std;
int next(int a) {
    int temp = a;
    int m1 = 10, m2 = 0;
	while(a > 0) {
		int y = a % 10;
		a /= 10;
		m1 = min(m1, y);
		m2 = max(m2, y);
	}
	return m1 * m2;
}

void solve() {
    int a,k;
    cin >> a >> k;
    for(int i=1;i<k;i++){
        int y = next(a);
        if(y=0) break;
        a+=y;
    }
    cout << a << "\n";
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