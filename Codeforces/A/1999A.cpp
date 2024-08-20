#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    cout << n/10+n%10 << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}