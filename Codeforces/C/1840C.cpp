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
    ll n,k,q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll ans=0;
    for(int i=0;i<n;i++){
        int count=0;
        while(a[i]<=q&&i<n){
            count++;
            i++;
        }
        if(count>0) i--;
//        cout << count << " " << i <<endl;
        if(count>=k) ans+=((count-k+1)+1)*(count-k+1)/2;
    }
    cout << ans << endl;
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

