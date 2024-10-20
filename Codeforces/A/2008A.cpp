#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;
    if(a%2==0&&b%2==0){
        cout << "YES" << endl;
    }else if(a%2==0&&b%2==1&&a>=2){
        cout << "YES" << endl;
    }else{
        cout << "NO" <<endl;
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