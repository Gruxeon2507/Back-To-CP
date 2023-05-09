#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin >> n >> x;
    string s;
    cin >> s;
    set<int>a;
    a.insert(x);
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            x--;
            a.insert(x);
        }else{
            x++;
            a.insert(x);
        }
    }
    cout << a.size() << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
