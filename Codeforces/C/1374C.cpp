#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >>n;
    string s;
    cin >> s;
    int counto=0;
    int countc=0;
    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            counto++;
        }else{
            countc++;
            if(countc>counto){
                countc--;
                ans++;
            }
        };
    }
    cout << ans << endl;
}
int main() {
    int t;
    std::cin >> t;
//    t=1;
    while (t--) {
        solve();
    }

    return 0;
}

