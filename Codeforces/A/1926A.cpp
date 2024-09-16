#include<iostream>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int a=0,b=0;
    for(int i=0;i<5;i++){
        if(s[i]=='A') a++;
        else b++;
    }
    if(a<b) cout << "B\n";
    else cout << "A\n";
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}