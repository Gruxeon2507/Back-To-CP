#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <string>
#define ll long long
using namespace std;

void solve() {
    int x,y;
    cin >> x >> y;
    vector<string> a(x);
    for(int i=0;i<x;i++) cin >> a[i];
    int ans=0;
    for(int i=0;i<x;i++){
        if(a[i][y-1]=='R')ans++;
    }
    for(int i=0;i<y;i++){
        if(a[x-1][i]=='D')ans++;
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

