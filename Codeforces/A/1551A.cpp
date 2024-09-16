#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int ans = n/3;
    int temp = n%3;
    if(temp==0){
        cout << ans <<" "<< ans  <<endl;
    }
    else if(temp==1){
        cout << ans+1 <<" "<< ans  <<endl;
    }
    else if(temp==2){
        cout << ans <<" "<< ans+1  <<endl;
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
