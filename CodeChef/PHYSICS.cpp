#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    string f="";
    for(int i=0;i<n;i++){
        f+=v[i];
    }

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
