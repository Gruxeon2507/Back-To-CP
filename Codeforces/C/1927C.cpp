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
    vector<int> a(n);
    vector<int> b(m);
    unordered_map<int,int> mpa,mpb;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        mpa[a[i]]++;
    }
    for(int i=0;i<m;i++) {
        cin >> b[i];
        mpb[b[i]]++;
    }
    int same=0;
    int ca=k/2,cb=k/2;
    for(int i=1;i<=k;i++){
        if(mpa[i]<=0&&mpb[i]<=0) {
            cout << "NO\n";
            return;
        }
        if(mpa[i]<=0&&mpb[i]>0&&cb>0) cb--;
        else if (mpb[i]<=0&&mpa[i]>0&&ca>0) ca--;
        else if(mpa[i]>0&&mpb[i]>0){
            same++;
        }else{
            cout << "NO\n";
            return;
        }
    }
    if(ca+cb>=same) cout << "YES\n";
    else cout << "NO\n";
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

