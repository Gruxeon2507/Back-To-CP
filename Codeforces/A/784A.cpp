#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n>=1900){
        cout << "Division 1" << endl;
        return;
    }
    if(n>=1600){
        cout << "Division 2" << endl;
        return;
    }
    if(n>=1400){
        cout << "Division 3" << endl;
        return;
    }
    if(n<=1399){
        cout << "Division 4" << endl;
        return;
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
