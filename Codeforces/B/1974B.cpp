#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a['z'+1]={0};
    vector<char> check;
    for(int i=0;i<n;i++){
        if(a[s[i]]>0) continue;
        else{
            a[s[i]]++;
            check.push_back(s[i]);
        }
    }
    sort(check.begin(),check.end());
    map<int,int> m;
    for(int i=0;i<=check.size()/2;i++){
        m[check[i]]=check[check.size()-1-i];
        m[check[check.size()-1-i]]=check[i];
    }
    for(int i=0;i<n;i++){
        cout << char(m[s[i]]);
    }
    cout << endl;
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
