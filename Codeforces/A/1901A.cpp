#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans = max(2*(x-a[n-1]),a[0]);
    for(int i=1;i<n;i++){
        ans = max(ans,a[i]-a[i-1]);
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