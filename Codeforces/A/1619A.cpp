#include <bits/stdc++.h>
using namespace std;
bool check=true;
void solve(){
    string s;
    check =true;
    std::getline (std::cin,s);
    if(s.length()%2!=0){
        cout << "NO" <<endl;
        return;
    }
    for(int i=0;i<s.length()/2;i++){
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
    cin.ignore();
//    t=1;
    while(t--){
        solve();
    }
    return 0;
}