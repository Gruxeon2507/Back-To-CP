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
    vector<int> a(n);
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
    }
    int mx=1;
    for(auto& it:m){
        if(it.second>mx) mx=it.second;
    }
    cout << n - mx << endl;
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

