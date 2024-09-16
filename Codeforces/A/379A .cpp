#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin >> a >> b;
    int ans = a;
    while(a>=b){
        int temp = a;
        a=a/b;
        ans+=a;
        a+=temp%b;
    }
    cout << ans << endl;

}

int main() {
    int t;
//    cin >> t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}