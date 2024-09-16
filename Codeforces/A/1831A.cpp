#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << n+1-arr[i] <<" ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
//    t=1;
    while(t--){
        solve();
    }
    return 0;
}