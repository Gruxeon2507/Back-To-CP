#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    int t=n/k;
    vector<string> ans(t,"");
    int count=0;
    for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k){
            ans[count]+=s[i][j];
        }
        count++;
    }
    for(int i=0;i<t;i++){
        cout << ans[i] << endl;
    }
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}