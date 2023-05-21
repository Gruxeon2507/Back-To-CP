#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int ans =0;
    for(int i=0;i<m;i++){
        if(arr[i]<0)ans+=arr[i];
    }
    cout << -ans << endl;
}

int main() {
    int t;
//    cin >> t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}