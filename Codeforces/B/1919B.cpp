#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=s[i]=='+'? 1 : -1;
    }
    cout << abs(sum) << endl;
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
