#include <bits/stdc++.h>
#define int long long
int MOD = 1000000007;
using namespace std;
void solve() {
    int n,k,g;
    cin >> n >> k >> g;
    int temp = min((g-1)/2*n,k*g);
    int remain = (k*g-temp)%g;
    if(remain>0){
        temp -= (g-1)/2;
        int last = ((g-1)/2+remain)%g;
        if(last * 2 < g){
            temp += last;
        }else{
            temp -= g-last;
        }
    }
    cout << temp << "\n";

}
#undef int
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}