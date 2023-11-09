#include <bits/stdc++.h>
#define int long long
using namespace std;
int binpow(int a,int b){
    int res=1;
    while(b>0){
        if(b&1) res=res*a;
        a=a*a;
        b>>=1;
    }
    return res;
}
void solve(){
    int n;
    cin >> n;
    int total = 2*n-2;
    int middle=0;
    int first = 4*3*binpow(4,total-(n+1))*2;
    if(n+2<=total) middle = (total-n-1)*4*9*binpow(4,total-(n+2));
    // cout << first << " " << middle << "\n";
    cout << first + middle << "\n";
}
#undef int
int main(){
    int t=1;
    // cin >>t;
    while(t--) solve();
    return 0;
}