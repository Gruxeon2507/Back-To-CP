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
    vector<ll> arr(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    if(n==1){
        if(arr[0]>=2){
            cout << "NO\n";
            return;
        }else{}
        cout << "YES\n";
        return;
    }
    if(arr[n-1]-arr[n-2]>1){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
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

