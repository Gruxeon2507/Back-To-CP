#include <bits/stdc++.h>
using namespace std;

void solve(){
    double n,x;
    cin >> n >> x;
    if(n<=2){
        cout << 1 << endl;
        return;
    }
    cout << ceil((n-2)/x) + 1<< endl;
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
