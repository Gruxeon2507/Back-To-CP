#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    if(sum%3==0){
        cout << 0 << endl;
        return;
    }
    if(sum%3==2){
        cout << 1 << endl;
        return;
    }
    for(int i=0;i<n;i++){
        if((sum-a[i])%3==0){
            cout << 1 << endl;
            return;
        }
    }
    cout << 2 << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}