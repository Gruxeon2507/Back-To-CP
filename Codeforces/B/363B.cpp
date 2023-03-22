#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min;
    int ans=0;
    int temp;
    for(int j=0;j<k;j++){
        temp+=arr[j];
        ans=0;
        min=temp;
    }
    for(int i=1;i<=n-k;i++){
        temp = temp - arr[i-1] + arr[i+k-1];
        if(temp<min){
            min=temp;
            ans=i;
        }
    }
    cout << ans+1  << endl;
}
int main() {
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}