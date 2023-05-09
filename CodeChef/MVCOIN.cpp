#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[1001]={0};
    int x;
    for(int i=1;i<=n;i++){
        cin >> x;
        a[x]=1;
    }
    int ans=0;
    int temp=0;
    for(int i=x;i>=1;i--){
        if(a[i]==0){
            ans+= ceil((double)temp/(double)k);
        }else{
            temp++;
        }
    }
    cout << ans <<endl;

}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
