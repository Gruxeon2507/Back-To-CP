#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int arr[n];
    long long ans;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int temp=0;
    for(int i=0;i<n;i++){
        sum-=arr[i];
        temp+=arr[i];
        ans = max(ans,sum*(1000*(i+1)-temp));
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
