#include<iostream>
using namespace std;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    if(a>b/2) cout << n/2*b + n%2*a << endl;
    else cout << n*a << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}