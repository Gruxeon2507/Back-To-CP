#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int i=0;
    int j=n-1;
    int ans=0;
    while(i<j){
        ans+=a[j]-a[i];
        i++;
        j--;
    }
    cout << ans <<endl;
}
int main() {
    int t;
    std::cin >> t;
//    t=1;
    while (t--) {
        solve();
    }

    return 0;
}