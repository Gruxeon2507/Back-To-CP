#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >>n;
    string s;
    cin >> s;
    bool check = true;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]&&((i%2)!=(j%2))) check=false;
        }
    }
    if(check) cout << "YES" <<endl;
    else cout <<"NO"<<endl;

}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}