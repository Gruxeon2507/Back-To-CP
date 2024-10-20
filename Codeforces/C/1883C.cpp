#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <string>
#define ll long long
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    int ans=k;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]%k==0) ans =0;
        if((k-a[i]%k)<ans) ans=k-a[i]%k;
    }
    if(k==4){
        int even=0,odd=0;
        for(int i=0;i<n;i++) {
            if (a[i] % 2 == 0) even++;
            else odd++;
        }
        if(even>=2) ans = 0;
        else if(even==1) ans = min(ans,1);
        else ans = min(ans,2);
    }
    cout << ans << endl;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

