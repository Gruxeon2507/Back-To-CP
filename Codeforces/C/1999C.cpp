#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n,s,m;
    cin >> n >> s >> m;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin >>  x[i] >> y[i];
    }
    for(int i=0;i<n;i++){
        if(i==0) {
            if (x[i] >= s) {
                cout << "YES" << endl;
                return;
            }
        }
        if(i==n-1){
            if(m-y[i]>=s){
                cout << "YES" << endl;
                return;
            }
        }
        if(i>=1){
            if (x[i] - y[i - 1] >= s) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;

}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}