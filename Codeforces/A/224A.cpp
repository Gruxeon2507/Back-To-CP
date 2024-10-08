#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>
#include <cmath>
#define ll long long
using namespace std;

void solve() {
    ll a,b,c;
    cin >> a >> b >> c;
    ll t = sqrt(a*b*c);
    cout << 4*(t/a+t/b+t/c) << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
//    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

