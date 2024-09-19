#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin >> x[i] >> h[i];
    }
    bool left=true;
    if(n<=2) {
        cout << n << endl;
        return;
    }
    int ans=2;
    for(int i=1;i<n-1;i++){
        if(x[i]-h[i]>x[i-1]&&left){
            left=false;
            ans++;
            continue;
        }
        if(x[i]+h[i]<x[i+1]){
            left=true;
            ans++;
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
//    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

