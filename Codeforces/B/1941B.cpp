#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-2;i++){
        if(a[i]>=0) {
            a[i + 1] -= 2 * a[i];
            a[i + 2] -= a[i];
            a[i] = 0;
        }
    }
    for(int i=0;i<n;i++){
//        cout << a[i] << endl;
        if(a[i]!=0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES" << endl;
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
