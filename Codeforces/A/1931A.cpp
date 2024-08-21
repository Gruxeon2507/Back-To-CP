#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            for(char k='a';k<='z';k++){
                if(i-'a'+j-'a'+k-'a'+3==n){
                    cout << i << j << k << endl;
                    return;
                }
            }
        }
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