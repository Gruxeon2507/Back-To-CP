#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    n*=2;
    char a='#',b='.';
    for(int i=0;i<n;i++){
        if(i%4==0||i%4==1){
            a='#';
            b='.';
        }else{
            a='.';
            b='#';
        }
        for(int j=0;j<n;j++){
            if(j%4==0||j%4==1) cout << a;
            else cout << b;
        }
        cout << endl;
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