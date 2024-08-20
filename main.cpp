#include<iostream>
using namespace std;

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    int b[n],c[m];
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    int ans =0;

    for(int i=0;i<m;i++){
        cin >> c[i];
        for(int j=0;j<n;j++){
            if(c[i]+b[j]<=k) ans++;
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