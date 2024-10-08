#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<n;i++) cout << a[i] << " ";
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

