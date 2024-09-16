#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll max=a[0];
    ll sum=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(a[i]>max) max=a[i];
        if(sum-max==max) ans++;
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