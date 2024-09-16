#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    int ans=0,max=0;
    for(int i=1;i<n;i++){
        if(gcd(n,i)+i>=max){
            ans=i;
            max=gcd(n,i)+i;
        }
    }
    cout << ans << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}