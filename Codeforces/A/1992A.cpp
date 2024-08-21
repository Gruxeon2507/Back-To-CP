#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    for(int i=1;i<=5;i++){
        if(a[0]<a[1]){
            a[0]++;
            continue;
        }
        if(a[1]<a[2]){
            a[1]++;
            continue;
        }
        a[2]++;
    }
    cout << a[0]*a[1]*a[2]<<endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}