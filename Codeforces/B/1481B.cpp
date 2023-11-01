#include <bits/stdc++.h>
#define int long long
int MOD = 1000000007;
using namespace std;
void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    for(int i=0;i<k;i++){
        bool f=false;
        for(int j=0;j<n;j++){
            if(j+1<n&&h[j]<h[j+1]){
                h[j]++;
                f=true;
                if(i==k-1){
                    cout << j+1 << "\n";
                }
                break;
            }
        }
        if(f==false){
            cout << -1 << "\n";
            return;
        }
    }
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