#include<iostream>
#include <cmath>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sum+=x;
    }
    long long sqrtNum = static_cast<long long>(sqrt(sum));
    if (sqrtNum * sqrtNum == sum) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}