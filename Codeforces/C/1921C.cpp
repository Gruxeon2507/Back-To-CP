#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

void solve() {
    ll n,f,a,b;
    cin >> n >> f >> a >> b;
    vector<ll> arr(n+1);
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    arr[0]=0;
    for(int i=1;i<=n;i++){
        f-=min((arr[i]-arr[i-1])*a,b);
    }
    if(f>0) cout << "YES\n";
    else cout << "NO\n";
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
