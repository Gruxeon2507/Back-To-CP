#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[2*n];
    int odd=0;
    for(int i=0;i<2*n;i++){
        cin >> arr[i];
        if(arr[i]%2==1) odd++;
    }
    if(odd==n) cout << "YES" << endl;
    else cout << "NO" <<endl;
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

