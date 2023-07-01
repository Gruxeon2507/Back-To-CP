#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=abs(a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            a[i]=0;
            for(int j=i+1;j<n;j++){
                if(a[j]<=0){
                    a[j]=0;
                    continue;
                }
                else{
                    i=j-1;
                    break;
                }
            }
            ans++;
        }
    }

    cout << sum << " " << ans << endl;
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
 