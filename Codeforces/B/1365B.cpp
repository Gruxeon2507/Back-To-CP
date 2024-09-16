#include <bits/stdc++.h>
#define int long long

using namespace std;
void solve() {
    int n;
    cin >> n;
    int a[n];
    bool sorted = true;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i>0&&a[i]<a[i-1]){
            sorted=false;
        }
    }
    vector<pair<int,int>> p;
    bool h0=false,h1=false;
    for(int i=0;i<n;i++){
        int b;
        cin >> b;
        if(b) h1=true;
        else h0=true;
    }
    if(h1&&h0){
        cout << "YES\n";
    }else if(sorted){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
#undef int
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}