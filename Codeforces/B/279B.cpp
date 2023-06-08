#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int total=0;
    int r=0;
    int ans=0;
    int temp=0;
    for(int i=0;i<n;i++){
        while(r<n&&total+v[r] <=t){
            total+=v[r];
            r++;
            temp++;
        }
        ans=max(ans,temp);
        total-=v[i];
        temp--;
    }
    cout << ans << endl;
}
int main() {
    int t;
//    std::cin >> t;
    t=1;
    while (t--) {
        solve();
    }

    return 0;
}
