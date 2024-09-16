#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    for(int i=n+1;i<m;i++){
        bool check=true;
        for(int j=2;j<= sqrt(i);j++){
            if(i%j==0){
                check=false;
                break;
            }
        }
        if(check){
            cout << "NO" << endl;
            return;
        }

    }
    for(int j=2;j<= sqrt(m);j++){
        if(m%j==0){
            cout <<"NO"<<endl;
            return;
        }
    }
    cout <<"YES" <<endl;
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