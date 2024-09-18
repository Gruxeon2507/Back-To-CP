#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            for(int k=j+1;k<s.length();k++){
                if((int(s[i]-'0')*100+int(s[j]-'0')*10+int(s[k]-'0'))%8==0){
                    cout << "YES\n";
                    cout << (int(s[i]-'0')*100+int(s[j]-'0')*10+int(s[k]-'0')) << endl;
                    return;
                }
            }
            if((int(s[i]-'0')*10+int(s[j]-'0'))%8==0){
                cout << "YES\n";
                cout << (int(s[i]-'0')*10+int(s[j]-'0')) << endl;
                return;
            }
        }
        if(int(s[i]-'0')%8==0){
            cout << "YES\n";
            cout << (int(s[i]-'0')) << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
