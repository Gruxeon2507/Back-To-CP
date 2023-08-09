#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int min = 10000001;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]<min) min = arr[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans+=arr[i]-min;
    }
    cout << ans << endl;

}

int main() {
    int t;
    cin>>t;
//    t=1;
    while(t--){
        solve();
    }
    return 0;
}

