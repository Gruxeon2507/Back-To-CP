#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b;
    cin >> a >> b;
    if(abs(a-b)%2==0) cout << "Bob\n";
    else cout << "Alice\n";
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}