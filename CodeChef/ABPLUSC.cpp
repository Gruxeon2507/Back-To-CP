#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    if(n==1) cout << "-1" << endl;
    else if(n>=1000000 && n%1000000==0) cout <<"1000000 " << n/1000000-1 <<" "<< 1000000 <<endl;
    else if(n>=1000000 && n%1000000!=0) cout <<"1000000 " << n/1000000 <<" "<< n%1000000 <<endl;
    else cout << "1 " << n-1 << " 1" << endl;

}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}