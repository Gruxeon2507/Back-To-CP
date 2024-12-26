#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n =s.size();
    for(int i=n-1;i>=0;i--){
        if(s[i]=='q') cout << 'p';
        else if (s[i]=='p') cout << 'q';
        else cout << 'w';
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}
