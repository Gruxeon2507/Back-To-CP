#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

int win(int a, int b){
    if(a>b) return 1;
    else if(a==b) return 0;
    else return -1;
}

void solve() {
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int ans=0;
    if(win(a1,b1)+win(a2,b2)>0) ans++;
    if(win(a2,b1)+win(a1,b2)>0) ans++;
    if(win(a1,b2)+win(a2,b1)>0) ans++;
    if(win(a2,b2)+win(a1,b1)>0) ans++;
    cout << ans << endl;
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
