#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    if(n%2==1){
        cout << "NO\n";
        return;
    }
    if(n%2==0){
        cout << "YES\n";
        char t='A';
        for(int i=0;i<n;i=i+2){
            cout << t <<t;
            t++;
        }
        cout << "\n";
    }
    return;
}
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}