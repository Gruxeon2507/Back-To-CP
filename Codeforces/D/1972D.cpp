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
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end(),greater<ll>());
    ll total=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]%2==0){
                total+=a[i];
            }
        }else{
            if(a[i]%2==1){
                total-=a[i];
            }
        }
    }
    if(total>0) cout << "Alice" << endl;
    else if(total<0) cout << "Bob" << endl;
    else cout << "Tie" << endl;
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

