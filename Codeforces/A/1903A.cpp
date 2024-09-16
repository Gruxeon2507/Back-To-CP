#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    int flag=true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            flag= false;
            break;
        }
    }
    if(k==1 && !flag) cout << "NO\n";
    else cout << "YES\n";
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}