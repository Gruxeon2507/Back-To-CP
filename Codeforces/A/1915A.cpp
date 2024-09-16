#include<iostream>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b) cout << c << endl;
    if(b==c) cout << a << endl;
    if(c==a) cout << b << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}