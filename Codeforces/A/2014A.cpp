#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int>  a(n);
    int ans=0;
    int coin =0;
    for(int i=0;i<n;i++)  {
        cin >> a[i];
        if(a[i]>=k) coin+=a[i];
        else if(a[i]==0&&coin>0){
            ans++;
            coin--;
        }
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

