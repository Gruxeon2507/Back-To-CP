#include <bits/stdc++.h>
using namespace std;
void solve(){
    long n,k;
    cin >> n >> k;
    cout << k + (k-1)/(n-1) << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}