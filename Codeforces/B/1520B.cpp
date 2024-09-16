#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans =0;
    int temp = 1;
    while(temp<=n){
        for(int i=1;i<=9;i++){
            if(temp*i<=n){
                ans++;
            }
        }
        temp=temp*10+1;

    }
    cout << ans << endl;

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
