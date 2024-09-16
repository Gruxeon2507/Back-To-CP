#include <iostream>
#define ll long long

using namespace std;


void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int s = min(a,b);
    int l = max(a,b);
    if((c>s&&c<l&&(d>l||d<s))||(d>s&&d<l&&(c>l||c<s))){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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