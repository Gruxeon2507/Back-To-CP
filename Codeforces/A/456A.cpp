#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    int max=-1;
    for(int i=0;i<n;i++){
        if(v[i].second<max){
            cout << "Happy Alex" <<endl;
            return;
        }
        max = v[i].second;
    }
    cout << "Poor Alex" << endl;
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
