#include <bits/stdc++.h>
using namespace std;
void solve(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << (min(A, B) < max(C, D) && min(C, D) < max(A, B)?"YES":"NO") << endl;

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