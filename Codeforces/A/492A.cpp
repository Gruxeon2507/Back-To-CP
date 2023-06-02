#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int sum=1;
    int lv=1;
    while(sum<=n){
        n-=sum;
        lv++;
        sum+=lv;
    }
    cout << lv-1 << endl;

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