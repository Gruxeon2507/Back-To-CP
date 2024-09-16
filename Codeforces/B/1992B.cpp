#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,k;
    cin >> n >> k;
    int a[k];
    for(int i=0;i<k;i++){
        cin >> a[i];
    }
    sort(a,a+k,greater<int>());
    int sum=0;
    int t=0;
    int z=0;
    for(int i=0;i<k;i++){
        if(i!=0) t+=a[i];
        sum +=a[i];
        if(i!=0){
            z+=a[i]-1;
        }
    }
    cout << sum - a[0] + z << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}s