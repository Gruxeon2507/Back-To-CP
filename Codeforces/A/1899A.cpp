#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%3==1 || n%3==2) cout << "First\n";
    else cout << "Second\n";
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}