#include <bits/stdc++.h>
#define int long long
int MOD = 1000000007;
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
    }
    if(m.size()>=3){
        cout << "NO\n";
    }else if(m.size()==1){
        cout << "YES\n";
    }else{
        for(int i=0;i<n;i++){
            if(m[a[i]]==n/2){
                cout << "YES\n";
                return;
            }
        }
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