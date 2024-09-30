#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <string>
#define ll long long
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    string a,b;
    cin >> a >> b;
    int ans=0;
    int j=0;
    for(int i=0;i<m;i++){
        if(b[i]==a[j]){
            ans++;
            j++;
            if(j>=n)break;
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

