#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <string>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    bool fl = true;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            if(s[i]=='z') s.insert(i+1,1,s[i]-1);
            else s.insert(i+1,1,s[i]+1);
            fl= false;
            break;
        }
    }
    if(fl) {
        if(s[s.length()-1]=='z') cout << s << char(s[s.length()-1]-1) << endl;
        else cout << s << char(s[s.length()-1]+1) << endl;
    }
    else cout << s << endl;
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

