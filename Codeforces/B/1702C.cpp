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
    int n = s.length();
    int ans=0;
    for(int i=0;i<n;i++){
        unordered_map<char,int> m;
        while(m.size()<=3&&i<n){
            if(m.size()==3&&m[s[i]]==0) break;
            m[s[i]]++;
//            cout << m.size();
//            cout<< s[i];
            i++;
        }
        if(i<n)i--;
//        cout << endl;
        ans++;
    }
    cout << ans << endl;
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

