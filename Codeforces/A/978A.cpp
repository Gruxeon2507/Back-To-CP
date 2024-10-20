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
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> m;
    stack<int> s;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=n-1;i>=0;i--){
        if(m[a[i]]==0){
            s.push(a[i]);
        }
        m[a[i]]++;
    }
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
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

