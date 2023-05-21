#include <bits/stdc++.h>
using namespace std;
void solve(){
    long n;
    cin >> n;
    long t = n/2021;
    bool check= false;
    for(int i=0;i<=t;i++){
        if((n-i*2021)%2020==0){
            check=true;
            break;
        }
    }
    if(check) cout<<"YES" <<endl;
    else cout <<"NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}