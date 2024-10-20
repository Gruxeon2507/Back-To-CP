#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <string>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<ll,ll>> a(n);
    ll min=0;
    ll mx=10e9+1;
    unordered_map<ll,ll> m;
    for(ll i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
        if(a[i].first==1&&a[i].second>min){
            min=a[i].second;
        }
        if(a[i].first==2&&a[i].second<mx){
            mx=a[i].second;
        }

    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i].first==3){
            if(a[i].second>=min&&a[i].second<=mx) count ++;
        }
    }
//    cout << mx << " " << min << " " << count << endl;
    if(mx>=min) cout << max(mx - min +1 - count,(ll)0) << endl;
    else cout << 0 << endl;
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

