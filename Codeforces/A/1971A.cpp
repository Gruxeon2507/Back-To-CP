#include<iostream>
using namespace std;

void solve(){
    int x,y;
    cin >> x >> y;
    if(x<y) cout << x << " " << y << endl;
    else cout << y << " " << x << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}