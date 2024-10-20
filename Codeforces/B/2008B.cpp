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
    float n;
    string s;
    cin >> n >> s;
    int t = static_cast<int>(sqrt(n));
    if(t*t!=n) {
        cout << "NO\n";
        return;
    }
    for(int i=0;i<n;i+=t){
        for(int j=i+1;j<i+t-1;j++){
            if(i==0||i==n-t){
                if(s[j]!='1'){
                    cout << "NO\n";
                    return;
                }
            }else{
                if(s[i]!='1'||s[t-1]!='1'||s[j]!='0'){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
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

