#include <iostream>
#define ll long long

using namespace std;


void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int s = min(a,b);
    int l = max(a,b);
    if(c>s&&c<l&&d>s&&d<l){
        cout << "NO\n";
    }else{
        cout << "YES\n";
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