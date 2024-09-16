#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    char a;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a;
            if(a!='W'&&a!='B'&&a!='G'){
                cout << "#Color" << endl;
                return;
            }
        }
    }
    cout << "#Black&White" << endl;
}
int main() {
    int t;
    std::cin >> t;
    t=1;
    while (t--) {
        solve();
    }

    return 0;
}
