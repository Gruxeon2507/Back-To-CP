#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a,b,c;
    cin >> a >> b >> c;
    for(int i=0;i<n;i++){
        if(a[i]!=c[i]&&b[i]!=c[i]){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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

