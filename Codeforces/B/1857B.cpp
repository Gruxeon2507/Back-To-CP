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
    int n;
    cin >> n;
    int ans=0;
    int mn=50000;
    int sum=0;
    vector<int> a;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        vector<int> b(m);
        for(int j=0;j<m;j++){
            cin >> b[j];
        }
        sort(b.begin(),b.end());
        a.push_back(b[1]);
        sum+=b[1];
        if(mn>b[0]) mn=b[0];
    }
    sort(a.begin(),a.end());
    cout << sum+mn-a[0] << endl;
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

