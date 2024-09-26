#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    ll l,r,a;
    cin >> l >> r >> a;
    ll ans = r/a*a-1;
    ll t = r/a + r% a;
    if(ans>=l)  cout << max(t,ans/a+ans%a) << endl;
    else cout << t << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

