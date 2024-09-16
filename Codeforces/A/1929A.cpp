#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int ans=0;
    for(int i=1;i<n;i++){
        ans = ans + a[i] - a[i-1];
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