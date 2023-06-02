#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long a[n],b[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    long long mina = a[0];
    long long minb = b[0];
    for(int i=1;i<n;i++){
        if(mina>a[i]) mina=a[i];
        if(minb>b[i]) minb=b[i];
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+= max(a[i]-mina,b[i]-minb);
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
//    t=1;
    while(t--){
        solve();
    }
    return 0;
}
