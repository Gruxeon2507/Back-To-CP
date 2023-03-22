#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int ans = n/2;
    int check = n%2;
    if(check==0){
        cout << ans << endl;
        for(int i=0;i<ans;i++){
            cout << "2 ";
        }
        cout << endl;
    }else{
        cout << ans << endl;
        for(int i=0;i<ans-1;i++){
            cout << "2 ";
        }

        cout << "3" <<endl;
    }
}
int main() {
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}