#include<iostream>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a<b&&b<c){
        cout << "STAIR\n";
    }else if (a<b&&b>c){
        cout << "PEAK\n";
    }else cout << "NONE\n";
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}