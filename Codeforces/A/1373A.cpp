#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>
#define ll long long
using namespace std;

void solve() {
    ll a,b,c;
    cin >> a >> b >> c;
    ll ans1,ans2;
    if(a*b<=c){
        ans2=-1;
    }else{
        ans2=b;
    }
    if(a<c){
        ans1=1;
    }else{
        ans1=-1;
    }
    cout << ans1 << " " << ans2 << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

