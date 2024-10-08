#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int ans=0;
    vector<int> b(n);
    b[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(b[i+1]>a[i])b[i]=a[i];
        else b[i]=b[i+1];
    }
//    for(int i=0;i<n;i++){
//        cout << b[i] << " ";
//    }
//    cout << endl;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            ans++;
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

