#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n==1) {
        cout <<"Alice"<<endl;
        return;
    }
    if(n==2||n==3||n==4) {
        cout <<"Bob"<<endl;
        return;
    }
    cout << "Alice" <<endl;

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