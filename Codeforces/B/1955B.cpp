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
    ll n,c,d;
    cin >> n >> c >> d;
    vector<int> a(n*n);
    map<ll,ll> m;
//    m.max_load_factor(0.5);
//    m.reserve(n);
    for(int i=0;i<n*n;i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    sort(a.begin(),a.end());
    ll arr[n][n];
    arr[0][0]=a[0];
    m[a[0]]--;
    for(int i=0;i<n;i++){
        if(i!=0){
            arr[i][0]=arr[i-1][0]+c;
            m[arr[i][0]]--;
        }
        for(int j=0;j<n;j++){
            if(j==0) continue;
            arr[i][j]=arr[i][j-1]+d;
            m[arr[i][j]]--;
        }

    }
    for(auto it:m){
        if(it.second<0){
            cout << "NO\n";
            return;
        }
    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0) continue;
            if(arr[i][j]-arr[i-1][j]!=c){
//                cout << arr[i][j] << " " << arr[i-1][j] << endl;
                cout << "NO\n";
                return;
            }
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

