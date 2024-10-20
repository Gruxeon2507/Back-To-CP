#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]=i+1;
    }
    int m;
    cin >> m;
    ll x1=0,x2=0;
    for(int i=0;i<m;i++){
        ll x;
        cin >> x;
        x1+=mp[x];
        x2+=n-mp[x]+1;
    }
    cout << x1 << " " << x2 << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
//    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

