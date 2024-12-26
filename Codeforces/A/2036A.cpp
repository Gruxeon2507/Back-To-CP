#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])!=5&&abs(a[i]-a[i-1])!=7){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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