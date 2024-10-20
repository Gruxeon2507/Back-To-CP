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
    int n,m;
    cin >> n;
    vector<int> r(n);
    for(int i=0;i<n;i++) cin >> r[i];
    cin >> m;
    vector<int> b(m);
    for(int i=0;i<m;i++) cin >> b[i];
    int t1= r[0];
    int t2 = b[0];
    for(int i=1;i<n;i++){
        r[i]+=r[i-1];
        if(r[i]>t1) t1=r[i];
    }
    for(int i=1;i<m;i++){
        b[i]+=b[i-1];
        if(b[i]>t2) t2=b[i];
    }

    cout << max(0,t1)+max(0,t2) << endl;
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

