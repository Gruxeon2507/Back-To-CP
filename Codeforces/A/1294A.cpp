#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,n;
    cin >> a >> b >> c >> n;
    int max = std::max(a, std::max(b,c) );
//    cout << max << endl;
    int sum=a+b+c;
    bool check = true;
    if(max*3 - sum> n){
        cout << "NO" << endl;
        return;
    }
    if((n+sum-max*3)%3!=0){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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
