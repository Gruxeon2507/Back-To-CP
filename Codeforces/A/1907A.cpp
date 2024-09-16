#include<iostream>
using namespace std;

void solve(){
    char c;
    int n;
    cin >> c >> n;
    char a[8]={'a','b','c','d','e','f','g','h'};
    for(int i=1;i<=8;i++){
        if(i!=n) cout << c << i << endl;
    }
    for(int i=0;i<8;i++){
        if(a[i]!=c) cout << a[i] << n << endl;
    }
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}