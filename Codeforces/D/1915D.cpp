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
    string ans="";
    //using push_back is a lot quicker than +
    for(int i=0;i<n;i+=2){
        ans.push_back(s[i]);
        ans.push_back(s[i+1]);
        if(i+2<n&&(s[i+2]=='b'||s[i+2]=='c'||s[i+2]=='d')){
            if(i+3<n&&(s[i+3]!='a'&&s[i+3]!='e')||i+3>=n){
                ans.push_back(s[i+2]);
                i++;
            }
        }
        if(i<n-2) ans+='.';
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
