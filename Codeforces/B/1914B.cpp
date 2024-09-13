#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    int t=n;
    for(int i=0;i<t-1-k;i++){
        cout << n << " ";
        n--;
    }
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    cout << endl;

}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}