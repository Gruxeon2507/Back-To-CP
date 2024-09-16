#include <bits/stdc++.h>
using namespace std;

void solve(){
    int w,h,n;
    cin >> w >> h >> n;
    int ans = 1;
    while(w%2==0 || h %2==0){
        ans*=2;
        if(w%2==0) w/=2;
        else if(h%2==0) h/=2;

    }
    if(ans>=n) cout <<"YES"<<endl;
    else cout << "NO" <<endl;

}
int main() {
    int t;
    std::cin >> t;
//    t=1;
    while (t--) {
        solve();
    }

    return 0;
}
