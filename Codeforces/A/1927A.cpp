#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int start=0,end=n-1;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            start = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            end = i;
            break;
        }
    }
    cout << end - start + 1 << endl;
}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}