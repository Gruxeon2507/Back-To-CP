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
    string s;
    cin >> s;
    int c1=0,c0=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0') c0++;
        else c1++;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') {
            c0--;
            if(c0<0){
                cout << c1 << endl;
                return;
            }
        }
        if(s[i]=='0'){
            c1--;
            if(c1<0){
                cout << c0 << endl;
                return;
            }
        }
    }
    cout << c0+c1<<endl;
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

