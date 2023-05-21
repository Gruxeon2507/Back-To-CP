#include <bits/stdc++.h>
using namespace std;
bool check=true;
void solve(){
    string s;
    std::getline (std::cin,s);
    if(s.length()%2!=0){
        cout << "NO" <<endl;
        return;
    }
//    cout << s << endl;
    for(int i=0;i<s.length()/2;i++){
//        cout << s[i] <<" " << s[i+s.length()/2] << endl;
        if(s[i]!=s[i+s.length()/2]){
            check=false;
        }
    }
    if(check) cout << "YES" <<endl;
    else cout <<"NO" <<endl;
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