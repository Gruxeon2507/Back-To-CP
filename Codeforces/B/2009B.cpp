#include <iostream>
#define ll long long

using namespace std;


void solve() {
    int n;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++) {
        cin >> s[i];
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<4;j++){
            if(s[i][j]=='#'){
                cout << j+1 << " ";
            }
        }
    }
    cout << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}