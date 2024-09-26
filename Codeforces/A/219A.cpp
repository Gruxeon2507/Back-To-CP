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
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    string ans="";
    for(auto it: m){
        if(it.second%n!=0){
            cout << -1 << endl;
            return;
        }
        int t = it.second/n;
        for(int i=0;i<t;i++){
            ans.push_back(it.first);
        }
    }
    string finans="";
    for(int i=0;i<n;i++){
        finans+=ans;
    }
    cout << finans << endl;
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

