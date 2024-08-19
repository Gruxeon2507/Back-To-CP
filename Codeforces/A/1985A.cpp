#include<iostream>
using namespace std;

void solve(){
    string a,b;
    cin >> a >> b;
    char t = a[0];
    a[0]=b[0];
    b[0]=t;
    cout << a << " " << b << endl;

}

int main(){
    int t=1;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}