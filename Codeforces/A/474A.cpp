#include <bits/stdc++.h>
using namespace std;

void solve() {
    string t;
    cin >> t;
    string s;
    cin >> s;
    vector<string> keyboard;
    keyboard.push_back("qwertyuiop");
    keyboard.push_back("asdfghjkl;");
    keyboard.push_back("zxcvbnm,./");
    for(int i=0;i<s.length();i++){
        for(int j=0;j<keyboard.size();j++){
            for(int k=0;k<keyboard[j].length();k++){
                if(s[i]==keyboard[j][k]&&t=="R"){
                    s[i]=keyboard[j][k-1];
                    break;
                }
                if(s[i]==keyboard[j][k]&&t=="L"){
                    s[i]=keyboard[j][k+1];
                    break;
                }
            }
        }
    }
    cout << s << endl;
}

int main() {
    int t;
//    cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}

