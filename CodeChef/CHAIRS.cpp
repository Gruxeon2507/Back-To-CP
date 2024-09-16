#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin >> x >> y;
    if(y>=x){
        cout << 0 << endl;
        return;
    }else{
        cout << x - y << endl;
    }

}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
