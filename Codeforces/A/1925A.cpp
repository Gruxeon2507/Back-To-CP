#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    string ans;
    string s;
    for(int i=0;i<k;i++){
        s.push_back('a'+i);
    }
    for(int i=0;i<n;i++){
        ans+=s;
    }
    cout << ans << endl;
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
