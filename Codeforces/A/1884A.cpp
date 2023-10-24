#include <bits/stdc++.h>
using namespace std;
bool check(int n,int k){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum%k==0) return true;
    else return false;
}
void solve() {
    int x,k;
    cin >> x >> k;
    for(int i=x;i<=x+19;i++){
        if(check(i,k)){
            cout << i << "\n";
            return;
        }
    }
}
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}