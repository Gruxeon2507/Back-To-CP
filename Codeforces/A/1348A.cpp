#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long arr[n];
    for(int i=0;i<n;i++){
        arr[i]= pow(2,i+1);
    }
    int ans = arr[n-1];
    for(int i=0;i<n-1;i++){
        if(i<n/2-1){
            ans+=arr[i];
        }else{
            ans-=arr[i];
        }
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

