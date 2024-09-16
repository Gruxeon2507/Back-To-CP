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
    int x=0;
    int y=0;
    for(int i=0;i<n;i++){
        if(x==0){
            for(int j=0;j<n;j++){
                if(s[i][j]=='1'&&y==0){
                    x++;
                }
            }
        }else{
            for(int j=0;j<n;j++){
                if(s[i][j]=='1'){
                    y++;
                }
            }
            break;
        }


    }
    if(x==y) cout << "SQUARE" << endl;
    else cout << "TRIANGLE" << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}