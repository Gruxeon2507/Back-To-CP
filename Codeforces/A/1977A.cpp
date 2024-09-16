#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    if(n<m||(n-m)%2==1) cout << "NO\n";
    else cout << "YES\n";
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}