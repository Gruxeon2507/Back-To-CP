#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    if(a==b){
        cout << 0 << endl;
        return;
    }
    if((a>b&&(a-b)%2==0)||(a<b&&(b-a)%2==1)){
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;

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