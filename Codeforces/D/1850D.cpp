#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int count=1;
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]>k){
            count=1;
        }else{
            count++;
        }
        ans=max(ans,count);
    }
    cout << n - ans << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}