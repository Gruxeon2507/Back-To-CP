#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    int n,m,k;
    cin >> n >> m >> k;
    for(int i=n;i>m;i--){
        cout << i << " ";
    }
    for(int i=1;i<=m;i++){
        cout << i << " ";
    }
    cout << endl;
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

