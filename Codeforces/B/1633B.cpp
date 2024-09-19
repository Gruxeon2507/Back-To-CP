#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n=s.length();
    int n0=0,n1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') n0++;
        else if (s[i]=='1') n1++;
    }
    if(n0==n1) cout << n0-1 << endl;
    else cout << min(n0,n1) << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

