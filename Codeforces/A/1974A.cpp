#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int x,y;
    cin >> x >> y;
    int ans = y/2 + y%2;
    int remain = y/2*7+y%2*11;
    if(remain<x) {
        x-=remain;
        ans+=(x+14)/15;
    }
    cout << ans << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}